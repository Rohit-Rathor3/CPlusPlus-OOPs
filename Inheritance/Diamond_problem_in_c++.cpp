/*  This problem occurs when a child class inherits from two parent classes , who also share a common grandparent class
                             A    // parent class of child's class parent (B an C)
                            / \
                           B   C  // parent classes of child class
                            \ /
                             D // child class  
The problem is that , here class D inherits the traits / properties of class A twice - one from class B and agian from C.
This gives rise to ambiguity since the compiler fails to understand which way to go */
#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"I am constructor of class A\n";
    }
};                             

class B:public A{
    public:
    B(){
        cout<<"I am constructor of class B\n";
    }
};                             
class C:public A{
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

/* output :- I am constructor of class A
I am constructor of class B
I am constructor of class A
I am constructor of class C
I am constructor of class D
so here we can see constructor of class A has been called two times , so this is the problem */
