#include <iostream>
using namespace std;

class Student {
private:
    string year;
    string branch;
    string faculty;
    int age;
    int marks;

public:
    void setYear(string y) {
        year = y;
    }

    void setBranch(string b) {
        branch = b;
    }

    void setAge(int a) {
        age = a;
    }

    void setFaculty(string f) {
        faculty = f;
    }

    void setMarks(int m) {
        marks = m;
    }

    string generateEnrollmentNumber() {
        return year + branch + to_string(age) + faculty.substr(0, 2) + to_string(marks);
    }

    void displayEnrollmentNumber() {
        string enrollmentNo = generateEnrollmentNumber();
        cout << "Generated Enrollment Number: " << enrollmentNo << endl;
    }
};

int main() {
    Student student;

    string year, branch, faculty;
    int age, marks;

    cout << "Enter the last two digits of the year : ";
    cin >> year;
    student.setYear(year);

    cout << "Enter the branch ( CS, IT, AIDS, ME): ";
    cin >> branch;
    student.setBranch(branch);

    cout << "Enter age: ";
    cin >> age;
    student.setAge(age);

    cout << "Enter faculty name: ";
    cin >> faculty;
    student.setFaculty(faculty);

    cout << "Enter marks (out of 100): ";
    cin >> marks;
    student.setMarks(marks);

    student.displayEnrollmentNumber();

    return 0;
}