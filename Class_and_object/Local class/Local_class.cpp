/* A class inside a function body is called a local class, 
it's scope remains till function body
outside the funtion body we can not access the members of class. */
#include<iostream>
using namespace std;
void func();
int main(){
    func();
    return 0;
}   
void func(){
	// local class
    class B{
        private :
        int number;
        public:
        void getdata(int n){
            number =n;
        }
        void square(){
            cout<<"Square of "<<number<<" = "<<number*number<<endl;
        }
       
    };
    // dynamically allocation of memory for object b;
     B *b;
     b=new B();
     b->getdata(30);
     b->square();
     delete b;
} // Function definition close
