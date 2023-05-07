#include "Student_Class.h"
#include <string>

using namespace std;

// конструкторы
Student::Student(string &FIO) :
        fio(FIO) {};

Student::Student(string &FIO, int64_t m1, int64_t m2, int64_t m3) :
        fio(FIO),
        mark1(m1),
        mark2(m2),
        mark3(m3) {
    if (m1 + m2 + m2 >= 12) { setAllow(true); }
    else { setAllow(false); }
}

// get/set
int64_t Student::getMark1() const { return mark1; }

void Student::setMark1(int64_t mark) { mark1 = mark; }

int64_t Student::getMark2() const { return mark2; }

void Student::setMark2(int64_t mark) { mark2 = mark; }

int64_t Student::getMark3() const { return mark3; }

void Student::setMark3(int64_t mark) { mark3 = mark; }

string Student::getFio() const { return fio; }

void Student::setFio(string &FIO) { fio = FIO; }

bool Student::getAllow() const { return allow; }

void Student::setAllow(bool allowed) { allow = allowed; }

bool Student::checkAllow() {
    if (getMark1() + getMark2() + getMark2() >= 12) { setAllow(true); }
    else { setAllow(false); }

    return allow;
}

bool Student::checkAStudent() const {
    if (mark1 + mark2 + mark3 == 15) { return true; }
    else { return false; }
}
