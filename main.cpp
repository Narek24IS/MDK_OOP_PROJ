#include <vector>
#include "Student_Class.h"
#include "getData.h"
#include "dataFileCreate.h"
#include "allowFileCreate.h"

using namespace std;

int main() {
    randFileCreate();

    vector<Student> students;

    fileDataGet(students);

    AStudentList(students);
    allowedStudentsList(students);
    failedStudentsList(students);

    return 0;
}
