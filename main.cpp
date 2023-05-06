#include <vector>
#include "Student.h"
#include "getData.h"
#include "fileCreate.h"
#include "dataView.h"



int main() {
    randFileCreate();

    vector<Student> students;

    fileDataGet(students);

    AStudentList(students);
    allowedStudentsList(students);
    failedStudentsList(students);

    return 0;
}
