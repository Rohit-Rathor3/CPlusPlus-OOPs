/* In this program we, will overload the call () operator*/
#include<iostream>
using namespace std;
class callOperator{
    int salary;
    public:
    callOperator(int s){
        cout<<"constructor is called !!\n";
        salary = s;
    }
    void salry(){
        cout<<"Your salary : "<<salary<<endl;
    }
    callOperator operator()(int sa){
        salary = sa;
        cout<<"Operator function called !!\n";
        return *this;
    }
};
int main(){
    callOperator s1(900000);
    s1(200000);
    //s1(300000);
    s1.salry();
    return 0;

}