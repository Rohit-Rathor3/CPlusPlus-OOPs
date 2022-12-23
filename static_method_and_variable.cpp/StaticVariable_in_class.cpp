/* static variable -> A variable that is declared using the 'static' keyword.
  The space of static variable is allocated only one time and this is used for the entirely
  of the program. Once this variable declared, it exists till the program executes. */
#include<iostream>
using namespace std;
class car{
    public:
    static int car_sold;  // Tis is a static variable.
    
    car(){
        car_sold++;       // This is default constructor which, increments the car_sold by one.
    }

} ;

// initializing static variable outside the class.
int car:: car_sold = 0;

int main(){
    car bmw, ferrari , kia , Audi, Creta;
    cout<<"Today Total car sold = "<<car::car_sold<<endl;
}

/* here , car_sold =5 , because we created 5 objects of car class so, constructor also called by five times 
  and everytime it car_sold be increased br one. So, car_sold = 5.