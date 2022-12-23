/* We can change the way of operators work for user defined types like object and structure , function.
   we can redeined how , the operator should work .*/
#include<iostream>
using namespace std;
class unary{
     int val;
     public:
     unary():val(0){}
     // operator overloading function as prefix
     void operator ++(){
         cout<<"hi , I am prefix operator overloaded function !"<<endl;
         ++val;
     }
     void display(){
         cout<<"value : "<<val<<endl;
     }
     // operator overloading function as postfix
     // in postfix we have to pass a int data type , it is not a parameter , its just syntex of function in postfix definition.
     void operator ++(int){
         cout<<"hi , I am postfix operator overloaded function !"<<endl;
         val++;
     }
     void disply(){
         cout<<"Value :"<<val;
     }
};
int main(){
    unary u1;
    // call the ' void operator  ++() finction ' 
     ++u1;
    u1.display();
    unary u2;
    u2++;
    u2.disply();
    return 0;

}   