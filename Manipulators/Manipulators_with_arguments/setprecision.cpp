/* setprecision(val) is used to control the number of digits of an output stream display of a floating point value */
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a;
    cout<<"Enter a floating point number : ";
    cin>>a;
    a=a/3;
    cout<<"Before the use of precision manipulator : \n";
    cout<<a<<endl;
    cout<<"After the use of precision manipulator : \n";
    cout<<"precision value 5 : " <<setprecision(5)<<a<<endl;
    cout<<"precision value 7 : " <<setprecision(7)<<a<<endl;
    cout<<"precision value 9 : " <<setprecision(9)<<a<<endl;
    cout<<"precision value 11 : " <<setprecision(11)<<a<<endl;
    cout<<"precision value 13 : " <<setprecision(13)<<a<<endl;
    return 0;
}