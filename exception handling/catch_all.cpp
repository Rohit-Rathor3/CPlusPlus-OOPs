/* catch(...) can catch all type of exception throw of any data type */
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
    catch(float y){
        cout<<"float type exception :";

    }
    catch(...){
        cout<<"Default exception :";
    }
    return 0;
}