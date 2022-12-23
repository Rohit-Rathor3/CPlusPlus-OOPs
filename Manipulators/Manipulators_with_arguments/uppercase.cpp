/* it is used to set the uppercase format flag for the specified str stream . This is mainly used for hexadecimal number.
nouppercase :- is just opposite to uppercase */
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"Before uppercase method of stream manipulator : ";
    cout<<hex<<showbase<<a;
    cout<<"\nAfter uppercase method of stream manipulator : ";
    cout<<hex<<showbase<<uppercase<<a;
    cout<<"\nnouppercase working ! : ";
    cout<<hex<<showbase<<nouppercase<<a;
    return 0;
}