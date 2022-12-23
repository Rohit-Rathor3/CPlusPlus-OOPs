/* A constructor is a special type of member function , having same name as of class.
         It have no return type and must be public.
         A constuctor with no parameters are called default constructor.
         it invokes or called automatically when object is created .
         constructor is mainly used to initialize the data members of class.
Note:- compiler always creats a default constructor when, we does not creats 
	       a construtor.*/

#include<iostream>
#include<string>
using namespace std;
class car{
    public:
    int number;
    string color;
    string name;
    public:
    void display_car(){
        cout<<name<<" of number "<<number<<" and color "<<color<<" is my car"<<endl;
    }
    //  defining constructor , it is our default constructor.
    car(){
        cout<<"Hlo , i am constructor !!"<<endl;
        name = "Ferrari"; // Default value of name
    }
};
int main(){
    car car1,car2;
    car1.name = "BMW";
    car1.number = 2019;
    car1.color = "Blue";
    car1.display_car();

    //car2.name = "BMW"; // car2.name = Ferrari 
    car2.number = 2019;
    car2.color = "Blue";
    car2.display_car();

    //note:- Here constructor will be called two times, bcz we decleared here,two objects.
    return 0;
}
