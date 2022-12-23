/* static method -> by declearing a method as static , we make it independent of any particular object of the class.
  A static method/member function can be called even if no objects of the class exist and the 
  static method are accessed using only the class name and the scope resolution operator '::' .
  note:- static method can only use static variable of a class. */
  #include<iostream>
using namespace std;
class car{
    public:
    static int car_sold;  // Tis is a static variable.
    
    car(){
        car_sold++;       // This is default constructor which, increments the car_sold by one.
    }
    static int totalCar(){
          cout<<"Today Total car sold = "<<car_sold<<endl;
          return 0;
    }

} ;

// initializing static variable outside the class.
int car:: car_sold = 0;

int main(){
    car bmw, ferrari , kia , Audi, Creta;
    car::totalCar();    // accessing static method by class , not by object.
    return 0;
    
}