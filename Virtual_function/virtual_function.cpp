/* Virtual Function :- A virtual function is a member function in the base class that we expect to redefined in derived classes.
   Basically , a virtual function is used in the base class in order to ensure that the function is 'overridden' . This especially 
   applies to cases where a pointer of base class points to an object of derived class. 
   now , making function as virtual we cannot access that function. */
#include<iostream>
using namespace std;
class base{
    public:
    virtual void welcome(){
        cout<<"Welcome in base class !"<<endl;
    }
    void hi(){
        cout<<"hi base class";
    }
};
class child:public base{
    public:
    void welcome(){
        cout<<"Welcome in child class !"<<endl;
    }
    void hi(){
        cout<<"hi child class";
    }
};
int main(){
    child c1;
    // pointer of base class type points to derived class's object c1.
    base *b1 = &c1;
    b1->welcome(); 
    b1->hi();
    return 0;

}   
// Now this will not access the member function of base class , in our previous chapters with out making function virtual it was accessing 
// the member function of base class but now , not!! .
