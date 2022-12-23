/* This pointer :- It points to the object of class which calling its member function */
#include<iostream>
using namespace std;
class student{
    private:
    int id;
    string name;
    public:
    // here , we are using same name of passing arguments and data members.
    /* id = id;
       name = name; 
       will generate error */
    student(int id=00 , string name="noname"){
        this->id = id;
        this->name = name;
    }
    void display()
    {
        cout<<"student name :- "<<name<<endl;
        cout<<"student id :- "<<id<<endl;
    }
};
int main(){
    student s1(10,"Rohit Rathor");
    s1.display();
    student s2 = student(20,"Rishab Jain"); // This is also a method of assining value.
    s2.display();
    return 0;
}