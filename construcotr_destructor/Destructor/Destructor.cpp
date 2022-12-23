/* Destructor -> It is just opposite of constuctor , when an object destroyed, it
                 called automatically.
    It is invoked , when a object is detroyed from the memory.
    They also don't take any arguments and don't have return value.
    Also destructor have the same name as their class and 
    their name is preced with a tiled (~) symbol. */
#include<iostream>
using namespace std;
class sum{
    private:
    int num1,num2;
    public:

    // This is parameterized constructor
    sum(int n1 =0, int n2=0){    // Here, ni = 0 , n2 = 0 are default values.
        num1 = n1;
        num2 = n2;
        cout<<"Constructor Called !!!!!"<<endl;
    }
    int solution(){
        return num1+num2;
    }
    // This is destructor
    ~sum(){
        cout<<"Destructor Called !!!!!!"<<endl;
    }
};
int main(){
	/* Destructor will called as many times as our object is present and destroyed. */
    sum sum1(20,30);
    cout<<"Sum1 = "<<sum1.solution()<<endl;
    
    sum *sum2 = new sum(100,200);
    cout<<"Sum2 = "<<sum2->solution()<<endl;
   /* note:- If i will not delete sum2 object then our Destructor will be called only
           one time, but it is good practice to delete allocated memory */
           delete sum2;
    return 0;

}      
