/* The most ambigous problem with multiple inheritance occurs during function overridding. Suppose , two base class have a same
function which is not overridden in derived class. If we try to call compiler sows error. */
#include<iostream>
using namespace std;
class human{
    public:
    void mind(){
        cout<<"I am human , have mind !"<<endl;
    }
    void samefunction(){
        cout<<"I am function of base class\n";
    }
};
class job{
    public:
    void doctor(){
        cout<<"I am a doctor"<<endl;
    }
    void samefunction(){
        cout<<"I am function of child class\n";
    }
};
class man:public human , public job{};
int main(){
    man ram;
    ram.mind();
    ram.doctor();
    // ram.samefunction()  will show an error
    // we have to use here, class-name :: function-name.
    ram.human::samefunction();
    ram.job::samefunction();
    return 0;

}