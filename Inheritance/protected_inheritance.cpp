/* Protected inheritance :- It makes the public and protected members of the base class protected in derived class*/
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
class protectedDerived:protected base{
    public:
    char getpub(){
        return pub;
    }
    char getprot(){
        return prot;
    }
    char getPVT(){
        getpvt();
    }

};
int main(){
    protectedDerived d;
    cout<<"private : "<<d.getPVT()<<endl;
    cout<<"protected : "<<d.getprot()<<endl;
    cout<<"public : "<<d.getpub()<<endl;
    return 0;
}   
/* d.getpvt() will so error bcz this is now protected we cannnot access directly with the help of object.*/