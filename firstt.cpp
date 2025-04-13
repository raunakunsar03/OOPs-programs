#include <iostream>
using namespace std;

typedef struct employee
{
    char favchar;
    int eId;
    float salary; 
} ep;
int main()
{
    ep raunak;
    raunak.eId = 14;
    raunak.salary = 120000;
    raunak.favchar = 'z';
    
    cout<< raunak.eId <<endl;
    cout<< raunak.salary <<endl;
    cout<< raunak.favchar <<endl; 

    cout<<"Everything is good" <<endl;
    return 0;
}