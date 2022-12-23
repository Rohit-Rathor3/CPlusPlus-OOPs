/* 
Here, we will use the , data members of base class and use them to initialise the 
object of child class using the constructor of base class via child's class
constructor */
//We can call and pass values to constructor of base class in derived class
#include<iostream>
#include<string>
using namespace std;
class father{
    protected:
    int height;
    public:
    father(){
        cout<<"Constructor of father class\n";
    }
};
class mother{
    protected:
    string color;
    public:
    mother(){
        cout<<"Constructor of mother class\n";
    }
};
class child:public mother , public father{ // using mutiple inheritance
 public:
 child(int ht , string colr):mother(),father(){
     height = ht;
     color = colr;
     cout<<"This is child class constructor\n";
 }
 void display(){
     cout<<" Child's hieght = "<<height<<" and colour "<<color<<endl;
 }
};
int main()
{
child c(6,"wheatness");
c.display();
return 0;
}
