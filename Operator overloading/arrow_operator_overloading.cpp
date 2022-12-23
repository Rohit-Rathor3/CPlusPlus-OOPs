/* In this program we ill overload the arrow operator (->) */
#include<iostream>
using namespace std;
class arrowOperator{
    int marks;
    public:
    arrowOperator(int m){
        marks = m;

    }
    void display(){
        cout<<"Your marks : "<<marks;
    }
    arrowOperator *operator ->(){
        return this;
    }
};
int main(){
    arrowOperator a1(96);
    a1->display();
    //a1.display();
    return 0;
}