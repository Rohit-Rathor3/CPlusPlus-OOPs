#include<iostream>
#include<string>
using namespace std;
class car{
    public:
    int number;
    string color;
    string name;
    static string dealer_name;
    public:
    void display_car();  //method must be declared in class body.
};
// This is definition of display_car() method outside the class.
void car::display_car(){
    cout<<name<<" of number "<<number<<" and color "<<color<<" is my car"<<endl;
    cout<<dealer_name;
    
}
// initializing static variable dealer_name.
string car:: dealer_name = "Prem Motors";
int main(){
    car car1; // This is instance of class car ,
	          //after initialization they become object of class.

    car1.name="Scorpio";
    car1.number = 2019;
    car1.color = "Black";
    car1.display_car();

    // printing static variable
    //cout<<"Dealer Name :- "<<car::dealer_name;
    return 0;

}

/* In above code , i defined the definition of method outside the class
     here , we used scope resolution operator :: for defintion of method out 
	 side the class.
     note :- we cannot define the method after object creation.
             we can also initialize the static data members/properties
			  of a class outside the class. 
			 We can define only static data members outside the class 
			 not regular data members. */
