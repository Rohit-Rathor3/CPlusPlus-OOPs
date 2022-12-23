/* public inheritance -> It makes the public member of the base class public in the derived class 
   and protected members of the base class remains protected int the derived class. */
#include<iostream>
using namespace std;
class base{
    private:
    char pvt ='A';
    protected:
    char prot = 'B';
    public:
    char pub = 'C';
    char getpvt(){
        return pvt;
    }
};
class publicDerived:public base{
    public:
    char getprot(){
        return prot;
    }

};
int main(){
    publicDerived d;
    cout<<"private : "<<d.getpvt()<<endl;
    cout<<"protected : "<<d.getprot()<<endl;
    cout<<"public : "<<d.pub<<endl;
    return 0;
}   