#include<iostream>
#include<string>
using namespace std;
// declaring the class.
class car{
    public:
    int number;
    string color;
    string name;
    public:
    void display_car(){
        cout<<name<<" of number "<<number<<" and color "<<color<<" is my car"<<endl;
    }
};
    int main() {
    // These are instance of class car , after initialization they become object of class.
    car car1,*car2; 

    // Here, i did static allocation of car1 in stack
    car1.name = "BMW";
    car1.number = 2019;
    car1.color = "Blue";
    car1.display_car();

    /* Here , i did dynamically allocation of memory of object car2 in heap so,
	we used pointer variable*/
    car2= new car();  /*new keyword is used for dynamically allocation of memory 
	this will return address of class*/
	
    car2->name = "AUDI";
    car2->number = 1001;
    car2->color ="White";
    (*car2).display_car();
    delete car2;           // We have to delete or free to allcocated memory in heap.
    return 0;
}
/* In above code, 'car' is a class which have three properties (data members)
    number , model and color 
    and one member function or method , display_car()
    here, car1 and car2 are two objects of class car.*/
