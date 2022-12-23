/* This is also a new method to access overridden method/function by passing the referance of object of child class
   to base class */
#include<iostream>
using namespace std;
class base{
    public:
    void welcome(){
        cout<<"I am from base class \n";
    }
};
class child : public base{
    public:
    void welcome(){
        cout<<"I am from child class \n";

    }
};
// Function we are passing the refrence of child class during calling
void callbasefunction(base &b){
    b.welcome();
}
int main(){
    child c1;
    c1.welcome();
    callbasefunction(c1);
    return 0;
}