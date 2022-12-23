/* Hirarchical inheritance :- when more than one class is inherited from one base class , is called hirarchical inheritance.*/
#include<iostream>
using namespace std;
class parent{
    public:
    void hieght(){
        cout<<"Hieght = 6 feet\n";

    }
};
class child1:public parent{
    public:
    void displaychild(){
        cout<<"I am first child of parent class\n";
    }
};
class child2:public parent{
    public:
    void displaysecondchild(){
        cout<<"I am second child of parent class\n";
    }
};
int main(){
    child1 c1;
    c1.hieght();
    c1.displaychild();

    child2 c2;
    c2.hieght();
    c2.displaysecondchild();
    return 0;
}
/* here, class child1 and child2 both have the access of parent's member */