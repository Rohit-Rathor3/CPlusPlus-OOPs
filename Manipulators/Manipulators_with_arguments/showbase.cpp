/* It indicate the numeric base of numeric value. Decimal values are output by default , octal numbers are output with
   a leading 0 , and hexadecimal numbers are output with a leading 0x.
   noshowbase : - is just opposite to showbase. */
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a ;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"\nshowbase is working !\n";
    cout<<"Decimal : "<<showbase<<a<<endl;   
    cout<<"Octal : "<<oct<<showbase<<a<<endl;
    cout<<"Hexadecimal : "<<hex<<showbase<<a<<endl;

    cout<<"noshowbase is working !"<<endl;
    cout<<"Decimal : "<<noshowbase<<a<<endl;   
    cout<<"Octal : "<<oct<<noshowbase<<a<<endl;
    cout<<"Hexadecimal : "<<hex<<noshowbase<<a<<endl;

    cout<<"By default noshowbase works implicitly ! \n";
    cout<<"Decimal : "<<a<<endl;   
    cout<<"Octal : "<<oct<<a<<endl;
    cout<<"Hexadecimal : "<<hex<<a<<endl;

    return 0;
}