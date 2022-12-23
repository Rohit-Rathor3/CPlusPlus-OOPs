/*Constructor Overloading -> when we use more than one constructor in our program ,
 then compiler face some problem in accessing of constructor. 
 Because compiler will get confused in selection of ,which constructor should be called.
 So, we will have to pass different-different parameters,
 (like different no. of parameter and different type of data types).
 so, compiler can easily judge , which compiler should be call. */
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    double fee;
    public:
    student(){
        cout<<"Hlo , i am constructor with no paramters !!"<<endl;
    }
    student(string sname){
        name =sname;
        cout<<"hlo , i am constructor with only one, name parameter"<<endl;
    }
    student(string sname , int srollno){
        name= sname;
        rollno = srollno;
        cout<<"hlo , i am constructor with two, parameter of name and roll no"<<endl;
    }
    student(string sname , int srollno , double sfee){
         name= sname;
        rollno = srollno;
        fee = sfee;
        cout<<"hlo , i am constructor with three, parameter of name , roll no , Fee"<<endl;
    }
};
int main(){
student st1;
student st2("Programming Project");
student st3("Programming Project",20);
student st4("Programming Project",20,5000.0);
return 0;
getch();
}
/* So , in above overloaded  construtors compiler can judge which constructor will be call.
note :- two constructor can not have same no. of parameters with same data type 
       of passing paramters. */
