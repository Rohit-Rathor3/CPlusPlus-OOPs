/* Here , we will see solution of Diamond problem.
The solution is 'virtual' keyword. We make the two parent classes(who inherits from the same grandparent class) into
virtual classes in order to avoid two copies of the grandparent class in the child class.*/
#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"I am constructor of class A\n";
    }
};                             

class B:virtual public A{  /* This is also know as virtual inhertance*/
    public:
    B(){
        cout<<"I am constructor of class B\n";
    }
};                             
class C: virtual public A{   /* This is also know as virtual inhertance*/
    public:
    C(){
        cout<<"I am constructor of class C\n";
    }
};    
class D:public B , public C{
    public:
    D(){
        cout<<"I am constructor of class D\n";
    }
};                             

int main(){
    D d1;
    return 0;
}   

