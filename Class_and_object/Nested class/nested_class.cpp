/* Nested class :- A class that is declared inside a class.
The nested class is also a member of the enclosing class 
and has the same access rights as the other members. */
#include<iostream>
using namespace std;
class A{
    public: // access specifier
    class B{
        private :
        int number;
        public:
        void getdata(int n){
            number =n;
        }
        void square(){
            cout<<"Square of "<<number<<" = "<<number*number<<endl;
        }
       
    }; // body of class  b is end.
     B b; // Creating object of class B.
} ; // class body end.
int main(){
    A ::B b1; // declaring instance of class B
    b1.getdata(10);
    b1.square();
    // Also we can access this way
    A a1; // declaring the instance of class A
    a1.b.getdata(20);
    a1.b.square();
    return 0;
}
