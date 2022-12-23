/* As we have faced problem of funcion overridding in inheritance , always function of child class be executed.
  so , we can access the overridden function by two methods.
  1. by using scope resolution operator 2. by using pointer
*/
// By using pointer
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
child d;
d.welcome();
// pointer of base type that points to d.
base * ptr = &d;
// call function of base class using ptr.
ptr->welcome();
return 0;
}  