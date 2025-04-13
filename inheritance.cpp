#include <iostream>
using namespace std;
class person
{
public:
    string name;
    int age;
    int idno;

    student(string name, int age, int idno)
    {
        this->name = name;
        this->age = age;
        this->idno = idno;
    }
};

class student : public person
{

} int main()
{

    return 0;
}