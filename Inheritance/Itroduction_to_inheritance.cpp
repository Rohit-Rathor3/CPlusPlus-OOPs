/* Inheritance is one of the key feature of c++ oop , it allows us to creat a new class
 (derived/child/subclass) from existing class (base/parent/super class). 
 The derived class inherits the fetures from the base class and can have
 addtional features of its own */
#include<iostream>
using namespace std;
class vehical{
    public:
    string name;
    int wheel;
    void setname(string vname){
        name = vname;
    }
    void setwheel(int vwheel){
        wheel = vwheel;
    }
} ;
class car:public vehical{
    public:
    string color;
    void setcolor(string ccolor){
        color = ccolor;

    }
    void displaydetail(){
        cout<<"This is "<<name<<" having "<<wheel<<" wheel and "<<color<<" color";
    }
};
int main(){
    car car1;
    car1.setname("BMW");
    car1.setwheel(4);
    car1.setcolor("Black");
    car1.displaydetail();
    return 0;
}