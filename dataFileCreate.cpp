#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

bool randFileCreate() {
    ofstream out;
    out.open("Students.txt");
    bool flag = false;
    if (out.is_open()) {
        vector<string> studentList = {"Ivanov A.I.", "Panin G.C.", "Frolov I.V.", "Zavaeva N.I.",
                                      "Lapova I.M.", "Vorobyov P.A.", "Danielyan N.S.", "Melnik M.A.",
                                      "Haritonova A.V.", "Nikodimova P.A.", "Kiracheva V.V."};
        random_device rd;
        mt19937 gen(rd());
        shuffle(studentList.begin(), studentList.end(), gen);
        for (const auto &fio: studentList) {
            out << fio << endl;
            out << "Matematika: " << gen() % 4 + 2 << endl;
            out << "Informatika: " << gen() % 4 + 2 << endl;
            out << "Russkiy: " << gen() % 4 + 2 << endl;
            out << endl;
        }
        flag = true;
        out.close();
    }

    if (flag) {
        cout << "File has been written" << endl;
        return true;
    } else {
        cout << "File hasn't been open" << endl;
        return false;
    }
}