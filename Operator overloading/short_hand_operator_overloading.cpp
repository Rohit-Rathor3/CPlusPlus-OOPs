/* In this program , we will overload the shorthand operators( += ,-= , *= , etc.) */
#include<iostream>
using namespace std;
class plusEqual{
    int sal;
    public:
    plusEqual():sal(10000){}
   // plusEqual(int s){
      //  sal = s;

   // }
    void displaySalary(){
        cout<<"Hlo , Your salary after adding bonus = "<<sal<<endl;
    }
    void operator +=(int bonus){
        sal+=bonus;
    }
};
class minusEqual{
    int sal;
    public:
    minusEqual():sal(10000){}
    
    void displaySalary(){
        cout<<"Hlo , Your salary after reducing fund = "<<sal<<endl;
    }
    void operator -=(int reducefund){
        sal-=reducefund;
    }
};

class multiplyEqual{
    int sal;
    public:
    multiplyEqual():sal(10000){}
    
    void displaySalary(){
        cout<<"Hlo , Your salary after occasion bonus = "<<sal<<endl;
   
    }
    friend void operator*=(multiplyEqual &obj,int a);
};

// Defining operator function as friend
void operator*=(multiplyEqual &obj,int a ){
    obj.sal= obj.sal*a;
}
int main(){
    plusEqual s1; //s1(200000);
    s1+=1000;
    s1.displaySalary();
    

    minusEqual *s2 = new minusEqual();
    (*s2)-=500;
    s2->displaySalary();

    multiplyEqual s3;
    int b=1.5;
    s3*=b;
    s3.displaySalary();

    return 0;

}