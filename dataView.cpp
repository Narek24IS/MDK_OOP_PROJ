#include <iostream>
#include <string>
#include <vector>
#include "Student_Class.h"

using namespace std;

void AStudentList(vector<Student> &students){
    cout<<"A-students:"<<endl;
    bool flag = false;
    for (const auto &student: students) {
        if (student.checkAStudent()) {
            cout<<student.getFio()<<endl;
            flag = true;
        }
    }

    if (!flag) {
        cout<<"No students"<<endl;
    }
    cout<<endl;
}

void allowedStudentsList(vector<Student> &students){
    cout<<"Allowed students:"<<endl;
    bool flag = false;
    for (auto &student: students) {
        if (student.checkAllow()) {
            cout<<student.getFio()<<endl;
            flag = true;
        }
    }

    if (!flag) {
        cout<<"No students"<<endl;
    }
    cout<<endl;
}

void failedStudentsList(vector<Student> &students){
    cout<<"Failed students:"<<endl;
    bool flag = false;
    for (auto &student: students) {
        if (!student.checkAllow()) {
            cout<<student.getFio()<<endl;
            flag = true;
        }
    }

    if (!flag) {
        cout<<"No students"<<endl;
    }
    cout<<endl;
}