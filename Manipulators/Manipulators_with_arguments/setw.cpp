/* setw() is used to set field width in output operation */
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"A = "<<setw(30)<<a<<endl;
    return 0;
}