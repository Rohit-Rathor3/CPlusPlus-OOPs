#include<iostream>
using namespace std;
class vehicle{
    private:
    string name;
    public:
    vehicle():name("Vehicle"){}
    // virtual function
    virtual string getname(){
        return name;
    }
};
class car:public vehicle{
    private:
    string name;
    public:
    car():name("Car"){}
    string getname(){
        return name;
    }
};
class bike : public vehicle{
    private :
    string name;
    public:
    bike():name("Bike"){}
    string getname(){
        return name;
    }

};
void print(vehicle* vname){
    cout<<"Vehicle : "<<vname->getname()<<endl;
}
int main(){
    vehicle *v1 = new vehicle();
    vehicle *v2 = new car();
    vehicle *v3 = new bike();
    print(v1);
    print(v2);
    print(v3);
    return 0;
}