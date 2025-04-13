#include <iostream>
using namespace std;

class teacher
{
public:
    // Non parametrized constructor

    // teacher() {
    //     cout<<"Hi, I am constructor" <<endl;
    // }

    // Parametrized constructor
    string name;
    string subject;
    string department;
    float salary;

    teacher(string name, string dept, string subject, float salary)
    {
        this-> name = name;
        this-> subject = subject;
        this-> department = dept;
        this-> salary = salary;
    }
    
    void getinfo()
    {
        cout << "Name :- " << name << endl;
        cout << "subject :- " << subject << endl;
    }
};

int main()
{
    teacher t1("raunak", "computer science", "oops", 85000 );

    //t1.getinfo();

    //copy constructor

    teacher t2(t1);
    t2.getinfo();

    return 0;
}