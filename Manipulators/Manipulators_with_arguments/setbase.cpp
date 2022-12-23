/* it is used to convert the basefield of one numeric value to another base */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number to set base : ";
    cin>>a;
    cout<<"Set base 16: "<<setbase(16)<<a<<endl;
    cout<<"Set base 10: "<<setbase(10)<<a<<endl;
    cout<<"Set base 08: "<<setbase(8)<<a<<endl;
    cout<<"Set base 00: "<<setbase(0)<<a<<endl;
    return 0; 

}