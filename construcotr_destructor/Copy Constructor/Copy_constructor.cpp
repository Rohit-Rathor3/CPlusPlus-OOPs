 /* Copy Constructor -> The copy constructor is used to copy the one object,
                        to another or intialise one object by anothor one. */
#include<iostream>
using namespace std;
class rectangle{
   private :
   double length;
   double breadth;
   public:

   // This is parameterized constructor
   rectangle(double len , double brd){
       length = len;
       breadth = brd;
   }
   // This is copy constructor which take address of object.
   rectangle(rectangle &obj){
       length = obj.length;
       breadth = obj.breadth;
   }
   double area(){
       return length*breadth;
   }
};   

int main(){
    rectangle rec1(10,20);
    rectangle rec2= rec1;  // here, using copy constructor.
    cout<<"Area of rec1 = "<<rec1.area()<<endl;
    cout<<"Area of rec2 = "<<rec2.area()<<endl;
    
    // Dynamic allocation of object a1.
    rectangle *a1 = new rectangle(20,20);
    rectangle *a2 =a1;    // here, using copy constructor.
    cout<<"Area of copied object = "<<a2->area();
    
    delete a1;
    return 0;
}
