#ifndef MDK_OOP_PROJ_STUDENT_CLASS_H
#define MDK_OOP_PROJ_STUDENT_CLASS_H
#include <string>
#include <iostream>

using namespace std;

class Student {
    // объявления переменных
private:
    string fio;
    int64_t mark1;
    int64_t mark2;
    int64_t mark3;
    bool allow;

public:
    // конструкторы
    Student (string&);
    Student (string&, int64_t, int64_t, int64_t);
    // get/set
    int64_t getMark1() const;
    void setMark1(int64_t mark);

    int64_t getMark2() const;
    void setMark2(int64_t mark);

    int64_t getMark3() const;
    void setMark3(int64_t mark);

    string getFio() const;
    void setFio(string& FIO);

    bool getAllow() const;
    void setAllow(bool allowed);

    bool checkAllow();

    bool checkAStudent() const;
};


#endif //MDK_OOP_PROJ_STUDENT_CLASS_H
