/* Parameterized constructor :- constructor with parameters is called Parameterized 
                                constructor.
  This is prefered method to initialize data members.
  Constructors never return value.
*/
  
#include<iostream>
#include<string>
using namespace std;
class car{
    public:
    int number;
    string color;
    string name;
    public:
     // This is parameterized constructor.
    car(string cname, int cnum , string ccolor){
        name = cname;
        number = cnum;
        color = ccolor;
    }
    void display_car(){
        cout<<name<<" of number "<<number<<" and color "<<color<<" is my car"<<endl;
    }
};

int main()
{
   // These are instance of class car , after initialization they become object of class.

    // Here, i did static allocation of car1 in stack.
    car car1("Kia",2045,"Yellow");
    car1.display_car();

    // Here , i did dynamically allocation of memory of object car2 in heap so,
	// we used pointer variable.
   car *car2 = new car("Creta",9454,"Silver");
   
    //new keyword is used for dynamically allocation of memory this, 
	//will return address of class.
    
   (*car2).display_car();
   delete car2;           // We have to delete or free to allcocated memory in haep.
   return 0;
}
