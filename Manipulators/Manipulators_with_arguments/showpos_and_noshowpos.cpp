/* showpos() - > This is stream manipulator , is used to show a non negative number along with their positive sign.
  noshowpos()- > It is just opposite of working of showpos manipulator , it shows non negative integer value without their + sign. */
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"showpos manipulator working !\n";
    cout<<setiosflags(ios::showpos)<<a;
    // also we can use it as
    cout<<"\n"<<showpos<<a+5<<endl;
    cout<<"noshowpos manipulator working !\n";
    cout<<noshowpos<<a;
    return 0;
}