/* new and delete operator can also be overloaded like other operators .
syntax :- void * operator new(size_t size)    and void operator delete(void *);
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class car{
    string Cname;
    double price;
    public:
    car(){
        cout<<"constructor is called !!!";
    }
    car(string  Cname , double price){
        this->Cname  = Cname;
        this->price = price;
    }
    void display(){
        cout<<"Car name : "<<Cname<<endl;
        cout<<" Car price : "<<price<<endl;
    }
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
};
int main() {
    car *c = new car("Creta" ,1500000);
    c->display();
    delete c;
    return 0;
}