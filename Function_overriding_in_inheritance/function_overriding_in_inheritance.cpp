/* Suppose the function derived in the both derived and base class. Now if we call this function using the object of 
   the derived class, the function of the derived class is executed. This is known as function overriding. */
#include<iostream>
using namespace std;
class base{
    public:
    void welcome(){
        cout<<"welcome in base class !!!!!"<<endl;
    }
};
class child:public base{
    public:
    void welcome(){
        cout<<"welcome in child class !!!!!"<<endl;
    }
};
int main(){
    child c;
    c.welcome();
    // if we called the welcome() function from an object of the base class, the function would not have been overridden
    base b;
    b.welcome();
    return 0;
}      