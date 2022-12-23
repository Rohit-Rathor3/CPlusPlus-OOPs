/* In this program we will use of basic manipulator ws 
 It is used to discard leading whiteaspace from an input stream */
#include<iostream>
#include<istream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    // method one 
    istringstream mystring("          I am learning C++");
    string line;
    getline(mystring >> ws ,line);
    cout<<" New string : "<<line<<endl;

    // second method

    char str[20];
    cout<<"Enter a string with preceeding with space : ";
    cin>>ws;
    cin.getline(str,20);
    cout<<"String is : "<<str<<endl;
    return 0;
}  