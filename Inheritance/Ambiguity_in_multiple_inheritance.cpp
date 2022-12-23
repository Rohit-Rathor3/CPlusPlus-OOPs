/*  The most ambigous problem with multiple inheritance occurs during function overriding. suppose , two base classes have a same 
    function which is not overridden in derived clas. If we try to call the function using the object of the derived class , compiler 
    shows error. It's bcz compiler doesn't know which function to call. */
#include<iostream>
using namespace std;
class base1{
    public:
    void welcome(){
        cout<<"I am from class base1 !"<<endl;
    }
};
class base2{
    public:
    void welcome(){
        cout<<"I am from class base2 !"<<endl;
    }
};
class child:public base1 , public base2{};
int main(){
    child c1;
    // error :- c1.welcome();
    /* This problem can be solved using the scope resolution operator to specify which function to class either base1 or base2. */
    c1.base1::welcome();
    c1.base2::welcome();
    return 0;

}    