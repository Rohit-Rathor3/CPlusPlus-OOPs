/* This is a simple program of exception handling*/
#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
    int a,b;
    
    cout<<"Enter two number :\n";
    cin>>a>>b;
        try{
          
        if(b<=0){
            throw b;
        }
        }

    catch(int x){
        cout<<"Plz enter correct denomenator : "<<b<<endl;
        exit(0);
    }

  cout<<"Result : "<<a/b;
    
    

    

    
    return 0;
}
