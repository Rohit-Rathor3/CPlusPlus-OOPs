/* Multilevel Inheritance :-  A class which is derived from a class which is also derived from a another base class is called
  multilevel inheritance. */
#include<iostream>
using namespace std;
class A{
    public:
    void displayA(){
        cout<<"I am A class"<<endl;
    }
};
class B:public A{
    public:
    void displayB(){
        cout<<"I am B class "<<endl;
    }
};
class C : public B{
    public:
    void displayC(){
        cout<<"I am C class"<<endl;
    }
};
class D:public C{
    public:
    void displayD(){
        cout<<"I am D class"<<endl;
    }
};
int main(){
    D d;
    d.displayA();
    d.displayB();
    d.displayC();
    d.displayD();
    return 0;
}