/* Here, we will see the execution of constructor and destructor , in inheritance. */
#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"Constructor of the base class!!!"<<endl;
    }
    ~base(){
        cout<<"Destructor of the base class!!!"<<endl;
    }
};
class child:private base{
    public:
    child(){
        cout<<"Constructor of the child class!!!"<<endl;
    }
    ~child(){
        cout<<"Destructor of the child class!!!"<<endl;
    }
};
int main(){
    child c; // child class object
    return 0;
}
