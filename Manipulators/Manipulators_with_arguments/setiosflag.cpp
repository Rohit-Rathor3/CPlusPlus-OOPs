/* it is used to set the format flag specified by parameter mask. When setiosflag is used in an expression 
   out<setiosflags(mask) or in>>setiosflags(mask). It sets all format flags of the stream out or in as specified by the mask. */

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<hex<<setiosflags( ios::showbase|ios::uppercase)<<a;
    return 0;
}   