#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Student_Class.h"

using namespace std;

bool fileDataGet(vector<Student> &students) {
    ifstream in;
    in.open("Students.txt");
    bool flag = false;
    string fam, io, buf;
    int64_t m1, m2, m3;
    if (in.is_open()) {
        size_t i = 0;
        while (in >> fam >> io >> buf >> m1 >> buf >> m2 >> buf >> m3) {
            string fio = fam + " " + io;
            students.emplace_back(fio, m1, m2, m3);
            i++;
        }
        flag = true;
        in.close();
    }

    if (flag) {
        cout << "Data has been got" << endl;
        return true;
    } else {
        cout << "File hasn't been open" << endl << endl;
        return false;
    }
}