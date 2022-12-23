/* As we have faced problem of funcion overridding in inheritance , always function of child class be executed.
  so , we can access the overridden function by two methods.
  1. by using scope resolution operator 2. by using pointer
*/

// C++ access overridden function to the base class by calling it in child class
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
        // access welcome() of the base class.
        base::welcome();
    }
};
int main(){
child d;
d.welcome();
return 0;
}  