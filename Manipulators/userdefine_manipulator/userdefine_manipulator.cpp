/*  we can also make custom manipulator as our requirments */
#include<iostream>
#include<iomanip>
using namespace std;
    //ostream(output stream) manipulator 
    /*  syntax:- return-type manipulator-name(parameter) . 
    note:- return type must be of ostream type
    note:- we donn't need to pass parameter explicitly. */
    ostream& welcome(ostream &out)
    {   cout<<"This is ostream manipulator !!\n";
        out<<"welcome to programming world ! --> ";
        return out;
    }
    // istream(input stream) manipulator
    /* syntax:- return-type manipulator-name(parameter) .
    note:- return type must be of istream type.
     note:- we donn't need to pass parameter explicitly. */
     istream& getname(istream & in){
         cout<<"This is istream manipulator !!\n";
         cout<<"Enter Your Name plz : ";
         return in;
     }
     int main(){
         string name;
         cin>>getname>>name;
         cout<<welcome<<name;
         return 0;
     }