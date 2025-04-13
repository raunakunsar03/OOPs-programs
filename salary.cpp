#include <iostream>
#include <string>
using namespace std;

class teacher
{ 
private :
     double salary;

public:
     //properties / attributes
    string name;
    string dept;
    string subject;
   

    //member function
    void changedept (string newdept) {
        dept = newdept;
    }

    // Setter

    void setsalary (double s) {
        salary = s;
    }
    // Getter

    double getsalary() {
        return salary;
    }
};


int main()
{
    teacher t1;
    t1.name = "Raunak";
    t1.dept = "computer science";
    t1.subject = "oops";
    t1.setsalary(12000);
    cout<< t1.name << endl;
    cout<< t1.getsalary() <<endl;
    return 0;  
}