/* Multiple Inheritance :- when a class derived from more than one parent class , is called multiple inheritance. */
#include<iostream>
using namespace std;
class human{
    public:
    void mind(){
        cout<<"I am human , have mind !"<<endl;
    }
};
class job{
    public:
    void doctor(){
        cout<<"I am a doctor"<<endl;
    }
};
class man:public human , public job{};
int main(){
    man ram;
    ram.mind();
    ram.doctor();
    return 0;

}
/* here class man have access of both human and job classes .*/
