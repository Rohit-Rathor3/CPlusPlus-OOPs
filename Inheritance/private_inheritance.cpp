/* Private Inheritance -> It makes the public and protected members of the base class private in the derived class */
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
    base(){
        cout<<"I am a Conructor of base class "<<endl;   // we can also make constructor
    }
};
class privateDerived:private base{
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
    privateDerived(){
        cout<<"I am constructor of derived class!!"<<endl;
    }

};
int main(){
    privateDerived d;
    cout<<"private : "<<d.getPVT()<<endl;
    cout<<"protected : "<<d.getprot()<<endl;
    cout<<"public : "<<d.getpub()<<endl;
    return 0;
}   