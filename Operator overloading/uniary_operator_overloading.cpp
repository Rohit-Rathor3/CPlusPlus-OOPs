/* Operator overloading :-  we can change the way operators works for user defined type like object and structure.
                            In simple way we can define a operator according our needs with out affecting its original properties. */
       // Uniary operator overloading 
#include<iostream>
using namespace std;
class incrementAsPrefix{
    private:
    int num;
    public:
    incrementAsPrefix(int n){
        num = n;
    };
    // overloading ++ increment operator as prefix
    void operator ++ (){
        ++num;
    }
    void display(){
        cout<<"Prefix ++ : "<<num<<endl;
    }
};
class decrementAsPrefix{
    private:
    int num;
    public:
    decrementAsPrefix(int n){
        num =n;
    };
    // overloading -- increment operator as prefix
    void operator -- (){
        --num;
    }
    void display(){
        cout<<"Prefix -- : "<<num<<endl;
    }
};                            

/* In postfix we have to pass a (int) in parameter of operator function this is not a argument of function , it is a syntex as postfix. */

class decrementAsPostfix{
    private:
    int num;
    public:
    decrementAsPostfix(int n){
        num =n;
    };
    // overloading -- decrement operator as postfix
    void operator -- (int){
        num--;
    }
    void display(){
        cout<<"Postfix -- : "<<num<<endl;
    }
};

class incrementAsPostfix{
    private:
    int num;
    public:
    incrementAsPostfix(int n){
        num =n;
    };
    // overloading -- increment operator as postfix
    void operator ++ (int){
        num++;
    }
    void display(){
        cout<<"Postfix ++ : "<<num<<endl;
    }
};

int main(){
    incrementAsPrefix IAPr(5);
    ++IAPr;
    IAPr.display();
    decrementAsPrefix DAPr(10);
    --DAPr;
    DAPr.display();
    incrementAsPostfix IAPo(15);
    IAPo++;
    IAPo.display();
    decrementAsPostfix DAPo(20);
    DAPo--;
    DAPo.display();
    return 0;

}