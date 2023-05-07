#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Student_Class.h"

using namespace std;

bool fileDataGet(vector<Student> &students) {
    ifstream file;
    enum class Data {
        FIO = 0, MATH = 1, INFORM = 2, RUS = 3, EMPTY = 4
    };
    Data line = Data::FIO;
    file.open("Students.txt");
    bool flag = false;
    string fio, buf;
    int64_t m1, m2, m3;
    if (file.is_open()) {
        size_t i = 0;
        while (!file.eof()) {
            switch (line) {
                case Data::FIO:
                    getline(file, fio);
                    line = Data::MATH;
                    break;
                case Data::MATH:
                    getline(file, buf);
                    m1 = buf[buf.size() - 1] - '0';
                    line = Data::INFORM;
                    break;
                case Data::INFORM:
                    getline(file, buf);
                    m2 = buf[buf.size() - 1] - '0';
                    line = Data::RUS;
                    break;
                case Data::RUS:
                    getline(file, buf);
                    m3 = buf[buf.size() - 1] - '0';
                    line = Data::EMPTY;
                    break;
                case Data::EMPTY:
                    getline(file, buf);
                    students.emplace_back(fio, m1, m2, m3);
                    line = Data::FIO;
                    break;
            }
        }
        flag = true;
        file.close();
    }

    if (flag) {
        cout << "Data has been got" << endl;
        return true;
    } else {
        cout << "File hasn't been open" << endl << endl;
        return false;
    }
}