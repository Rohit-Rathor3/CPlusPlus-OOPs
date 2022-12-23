/* Friend class -> This is also like friend function . We can declare friend class with 'friend' keyword.
  note:- class1 cannot access members of class2.  It is because friend relation in c++
                     is only granted , not taken.
      */
#include<iostream>
using namespace std;
class class2;             // This is forward decleartion of class2.
class class1{
    private:
    int num1;
    // friend class decleration
    friend class class2;
    public:
    class1(){
        num1=9;
    }
};
class class2{
    private:
    int num2;
    public:
    class2(){
        num2 = 99 ;
    }
    // This function is accessing the private data member of class1.
    int add(){
        class1 number; // we have to make object of class1 class to access data member .
        return number.num1 + num2;
    }
};
int main(){
   // class1 nu1();
    class2 nu2;
    cout<<"sum : "<<nu2.add()<<endl;
    return 0;
}