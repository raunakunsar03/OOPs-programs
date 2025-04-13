#include<iostream>
#include<string.h>
// #include<conio.h>
using namespace std;

struct Student{
    int RollNo;
    char Name[30];
    float Marks;
};

int main(){
    Student S[10];
    int n,i;

    cout<< "Enter the Total no. of student" <<endl;
    cin>> n;

    for(i = 0; i<n; i++){
        cout << "Enter the name of student = "; 
        cin >> S[i].Name ;
        cout << "Enter the Rool no. of student = ";
        cin >> S[i].RollNo ;
        cout << "Enter the Marks of student = " ;
        cin >> S[i].Marks ;
    }

    for(i=0; i<n; i++){
        cout << endl;
        
        cout << "Student Name is = "<< S[i].Name << endl; 
        cout << "Student Rool no. is = "<< S[i].RollNo << endl; 
        cout << "Student Marks is = "<< S[i].Marks << endl;

        cout <<"Persentage is = "<< ((S[i].Marks)/500)*100 <<endl; 
    }
return 0;
}