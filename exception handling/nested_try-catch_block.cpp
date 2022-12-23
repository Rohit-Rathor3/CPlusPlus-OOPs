#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
    try{
        try{
            throw 10;
        }
        catch(int n){
            cout<<"Throw inner "<<n<<endl;
            throw;
        }

    }
    catch(int n)
    {
        cout<<"Throw outer "<<n;
    }
    return 0;
}