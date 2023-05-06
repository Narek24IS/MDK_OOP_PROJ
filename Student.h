#ifndef MDK_OOP_PROJ_STUDENT_H
#define MDK_OOP_PROJ_STUDENT_H
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
    Student (string FIO){
        setFio(FIO);
    }
    Student (string FIO, int64_t m1, int64_t m2, int64_t m3){
        setFio(FIO);
        setMark1(m1);
        setMark2(m2);
        setMark3(m3);
        if(m1+m2+m2 <= 12){ setAllow(true);}
        else { setAllow(false);}
    }
    // get/set
    int64_t getMark1() const{return mark1;}
    void setMark1(int64_t mark){mark1 = mark;}

    int64_t getMark2() const{return mark2;}
    void setMark2(int64_t mark){mark2 = mark;}

    int64_t getMark3() const{return mark3;}
    void setMark3(int64_t mark){mark3 = mark;}

    string getFio() const{return fio;}
    void setFio(string FIO){fio = FIO;}

    bool getAllow() const{return allow;}
    void setAllow(bool allowed){allow = allowed;}

    bool checkAllow(){
        if(getMark1()+getMark2()+getMark2() >= 12){ setAllow(true);}
        else { setAllow(false);}

        return allow;
    }

    bool checkAStudent() const{
        if(mark1 + mark2 + mark3 == 15){ return true;}
        else { return false;}
    }
};


#endif //MDK_OOP_PROJ_STUDENT_H
