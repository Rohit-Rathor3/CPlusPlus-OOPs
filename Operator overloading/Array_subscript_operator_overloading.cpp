/* Here we will overload the array subscript [] operator */
#include<iostream>
using namespace std;
class marks{
    int mark[5];
    public:
    marks(int sub1 , int sub2 , int sub3 , int sub4 ,int sub5){
        mark[0] = sub1;         
        mark[1] = sub2;
        mark[2] = sub3;
        mark[3] = sub4;
        mark[4] = sub5;
    }  
    int operator[](int position){
        return mark[position];
    }

};


int main(){
    marks m1(7,9,8,7,9);
    cout<<m1[0]<<endl;
    cout<<m1[1]<<endl;
    cout<<m1[2]<<endl;
    cout<<m1[3]<<endl;
    cout<<m1[4]<<endl;
    return 0;
}