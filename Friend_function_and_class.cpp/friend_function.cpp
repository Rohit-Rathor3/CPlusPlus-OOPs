/* Friend function -> This is not a member function of class. It can access the protected and 
     private data of a class. We declare a friend function using the 'friend' keyword. */
#include<iostream>
#include<string.h>
using namespace std;
class car{
    private:
    string name;
    unsigned int price;
     // declaration of friend function
    friend void display(car);
    public:
    // constructor initialsing data members
    car():name("Audi"),price(3260000){}

   
};
// definition of friend function.
void display(car car1){
    cout<<"Car name : "<<car1.name<<" price : "<<car1.price<<endl;
}     

int main(){
    car car1;
    display(car1);
    return 0;
}