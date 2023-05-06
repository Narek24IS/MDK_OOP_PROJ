#include <vector>
#include "Student_Class.h"
#include "getData.h"
#include "fileCreate.h"
#include "dataView.h"

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
