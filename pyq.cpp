#include <iostream>
using namespace std;
class Name
{
    string name1;
    string name2;
    string name3; 
    string display;
    public:
    void input()
    {
        cout << "Enter the name1 :- ";
        cin >> name1;
        cout << "Enter the name2 :- ";
        cin >> name2;
        cout << "Enter the name3 :- ";
        cin >> name3;
    }
    void output(){
        display = name1 +" "+ name2 +" "+ name3;
        cout << display << endl;
    }
};

int main()
{
    Name n1; 
    n1.input();
    n1.output();
    return 0;
}