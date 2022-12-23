/* In this example, we will add members of two differents class using friend function 
 In below program , a friend function 'add' is accessing data members of both classes class1 and of class2.*/
#include<iostream>
using namespace std;
class class2;   // forward decleartion
class class1{
    private:
    int num1;
    // friend function decleration
    friend int add(class1,class2);
    public:
    class1():num1(20){}
};

class class2{
    private:
    int num2;
    // friend function decleration
    friend int add(class1,class2);
    public:
    class2():num2(80){}
};

// friend function definition
 int add(class1 n1, class2 n2){
     return n1.num1 + n2.num2;
 }
 int main(){
     class1 number1;
     class2 number2;
     cout<<"Sum : "<<add(number1 , number2)<<endl;
     return 0;
 }


