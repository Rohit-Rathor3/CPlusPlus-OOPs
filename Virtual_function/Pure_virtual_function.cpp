/* Pure virtual function :- It is a function , doesn't have use in base class but the function must be
   implemented by all derived classes.
   This function doesn't have function body and must be end with = 0 .
   but we can define the function outside the class with scope resolution operator */

   /* Abstract class -> A class which have , pure virtual function is called abstract class. 
   we can declare n number of virtual function in our class , in below code i declared two virtual function*/
#include<iostream>
using namespace std;
class person{
    public:
    virtual void welcome()=0;
    virtual void welcom()=0;
};
void person ::welcome(){
    cout<<"welcome in person class\n";
}     
class boy:public person{
    public:
    void welcome(){
        cout<<"welcome to boy class!\n";
        person::welcome();

    }
    void welcom(){
        cout<<"welcome to boy class!\n";
    }
};
class girl : public person{
    public:
    void hello(){
        cout<<"Hello , i am a girl class!";
    }
     void welcome(){
        cout<<"welcome to girl class!\n";
     }
     void welcom(){
        cout<<"welcome to boy class!\n";
     }

};
int main(){
    boy b1;
    b1.welcome();
    girl g1;
    g1.hello();
    return 0;
}