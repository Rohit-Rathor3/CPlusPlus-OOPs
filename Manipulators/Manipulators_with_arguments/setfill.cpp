/* setfill() is used to specify a different character to fill the unused field width of the value */
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    cout<<setfill('#')<<setw(20)<<a<<setfill('*')<<setw(20)<<b;
    return 0;
}