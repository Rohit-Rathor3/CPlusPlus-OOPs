/* Binary operator work on two operands ex:- x + y; '+' is a binary operator.
  In this program we will, add two complex numbers */
#include<iostream>
using namespace std;
class complex{
    double real_part;
    double imag_part;
    public:
    complex():real_part(0.0) , imag_part(0.0){};

    void input_number(){
        cout<<"Enter Real Part : \n";
        cin>>real_part;
        cout<<"Entere Imaginary Part : \n";
        cin>>imag_part;
    }
    // Overloaded + operator
    complex operator +(complex object){
        complex temp ;
        temp.real_part = real_part + object.real_part;
        temp.imag_part = imag_part + object.imag_part;
        return temp;
    }

    void output(){
        if (imag_part<0){
            cout<<"Complex Number : "<<real_part<<" "<<imag_part<<"i"<<endl;
        }
        else{
            cout<<"Complex Number : "<<real_part<<"+"<<imag_part<<"i"<<endl;
        }
    }
};

int main(){
    complex c1,c2,sum;
    cout<<"Enter First Complex Number : \n";
    c1.input_number();
    cout<<"Enter Second Complex Number : \n";
    c2.input_number();
    /* Here , c1 is calling the operator function and c2 is being passed as a argument to the function */
    sum = c1+c2;
    sum.output();
    return 0;

}