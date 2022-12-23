/* In this program we will overload new and delete operator globally */
#include<iostream>
#include<stdlib.h>
using namespace std;
// overloading new operator
    void * operator new(size_t  size)
    {
        cout<<"Overloading new operator !!"<<endl;
        void *p = malloc(size);
        return p;
    }
    // overlaoding delete operator
    void operator delete(void *p){

        cout<<"Overloading delete operator !!"<<endl;
        free(p);

    }
int main(){
    string *car = new string;
    *car = "Kia";
    cout<<"Car : "<<*car<<endl;
    delete car;
    return 0;
}