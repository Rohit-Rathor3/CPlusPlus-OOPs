/* The left or right manipulator is used to set the adjustable format flag for the str stream to left or right.*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    string name;
    int a;
    cout<<"working with string : \n";
    cout<<"Enter a string : ";
   cin>>name;
    cout<<"Internal : "<<setw(10)<<internal<<name<<endl;
    cout<<" Left    : "<<setw(10)<<left<<name<<endl;
    cout<<" Right   : "<<setw(10)<<right<<name<<endl;
    cout<<"\n Working with integer : \n";
    cout<<"Enter a number : \n";
    cin>>a;
    cout.width(10);       // cout<<setw(10); is also correct to set field; 
    cout<<internal<<a<<endl;
    cout.width(10);
    cout<<left<<a<<endl;
    cout.width(10);
    cout<<right<<a<<endl;
    return 0;
}