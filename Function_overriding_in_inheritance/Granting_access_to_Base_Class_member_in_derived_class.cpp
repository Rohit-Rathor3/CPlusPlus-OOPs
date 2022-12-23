/* Here we,  will access member of base class in private mode inheritance */
#include<iostream>
#include<string>
using namespace std;
class base{
    protected:
    string class_name;
    public:
    void setname(string cname){
       class_name = cname;
    }
};
class child:private base{
    public:
    base::class_name;
    base::setname;
    void setclassName(string cname){
        setname(cname);
    }
    void display(){
        cout<<"class name "<<class_name<<endl;

    }
};
int main(){
    child c;
    c.setname("Programming Projects");
    c.display();
    cout<<"Name agian : "<<c.class_name<<endl;
    return 0;
}