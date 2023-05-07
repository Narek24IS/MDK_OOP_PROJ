#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Student_Class.h"

using namespace std;

void AStudentList(vector<Student> &students) {
    ofstream file;
    file.open("A-Students.txt");
    file << "A-students:" << endl;
    bool flag = false;
    for (const auto &student: students) {
        if (student.checkAStudent()) {
            file << student.getFio() << endl;
            flag = true;
        }
    }

    if (!flag) {
        file << "No students" << endl;
    }
    file << endl;
    cout << "The list of A-students has been written!" << endl;
    file.close();
}

void allowedStudentsList(vector<Student> &students) {
    ofstream file;
    file.open("Allowed students.txt");
    file << "Allowed students:" << endl;
    bool flag = false;
    for (auto &student: students) {
        if (student.checkAllow()) {
            file << student.getFio() << endl;
            flag = true;
        }
    }

    if (!flag) {
        file << "No students" << endl;
    }
    file << endl;
    cout << "The list of allowed students has been written!" << endl;
    file.close();
}

void failedStudentsList(vector<Student> &students) {
    ofstream file;
    file.open("Failed students.txt");
    file << "Failed students:" << endl;
    bool flag = false;
    for (auto &student: students) {
        if (!student.checkAllow()) {
            file << student.getFio() << endl;
            flag = true;
        }
    }

    if (!flag) {
        file << "No students" << endl;
    }
    file << endl;
    cout << "The list of failed students has been written!" << endl;
    file.close();
}