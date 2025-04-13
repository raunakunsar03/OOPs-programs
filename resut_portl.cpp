#include <iostream>
#include <cstring> // for strcpy
using namespace std;

class infunc {
private:
    char roll_no[12], name[30];
    int previousmark1, previousmark2;
    float avgmarks;

public:
    infunc();
    void print();
    void getdata();
    inline float avg() {
        avgmarks = (previousmark1 + previousmark2) / 2.0f; // float division
        return avgmarks;
    }
};

// Constructor
infunc::infunc() {
    strcpy(roll_no, "000000000000");
    strcpy(name, "myname");
    previousmark1 = 0;
    previousmark2 = 0;
    avgmarks = 0.0f;
}

// Get data from user
void infunc::getdata() {
    cout << "Enter Roll Number: ";
    cin >> roll_no;

    cout << "Enter Name: ";
    cin.ignore(); // to consume leftover newline
    cin.getline(name, 30);

    cout << "Enter 1st Semester Marks: ";
    cin >> previousmark1;

    cout << "Enter 2nd Semester Marks: ";
    cin >> previousmark2;

    avg(); // calculate average right after input
}

// Print student info
void infunc::print() {
    cout << "\n.....WELCOME TO RESULT PORTAL....." << endl
         << "RTU roll = " << roll_no << endl
         << "Name = " << name << endl
         << "1st sem mark = " << previousmark1 << endl
         << "2nd sem mark = " << previousmark2 << endl
         << "Total average score = " << avgmarks << endl
         << ".....Thank You.....\n" << endl;
}

// Main function
int main() {
    infunc a, b;

    cout << "Enter details for student A:\n";
    a.getdata();
    a.print();

    cout << "Enter details for student B:\n";
    b.getdata();
    b.print();

    return 0;
}
