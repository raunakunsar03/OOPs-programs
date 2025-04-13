#include<iostream>
#include<string.h>
using namespace std;
class nifunc
{
    private:
    char roll[12],name[30];
    int previousmarksk1,previousmarksk2;
    float averagemarks;
    public:
    nifunc();
    void print();
    void getdata();
    inline float avg()
    {
   averagemarks =(previousmarksk1+previousmarksk2/2);
        return averagemarks;
    }
};
nifunc::nifunc()
{
    strcpy(roll,"12345");
    strcpy(name,"pulkit");
    previousmarksk1=0;
    previousmarksk2=0;
}
void nifunc::getdata()
{
    cout<<"enter your rtu roll no.=";
    cin>>roll;
    cout<<"enter your name=";
    cin>>name;
    cout<<"enter your mark ist and2nd sem=";
    cin>>previousmarksk1>>previousmarksk2;
    avg();

}
void nifunc::print()
{
    cout<<"welcome to result portal"<<endl<<
    "rtu roll="<<roll<<endl<<"name="<<"name="<<name<<endl
    <<"1st sem mark="<<previousmarksk1<<endl<<"2nd sem marks="<<previousmarksk2<<endl<<
    "total average score="<<averagemarks<<endl<<"thank you "<<endl;

}
int main()
{
nifunc a,b,c;
a.getdata();
a.avg();
a.print();
b.getdata();
b.avg();
b.print();
return 0;}