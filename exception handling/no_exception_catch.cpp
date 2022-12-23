/* If there is no catch to handle exception then our program will terminate abnormally (terminate function will callled )*/
#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
    try{
        throw 'a';
    }
   
    catch(int x){
        cout<<"integer type exception:";
    }
    return 0;
}