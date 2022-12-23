#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{   string name;
    cout<<"\nEnter Your Name : ";
    getline(cin,name);
    ofstream file_obj;
    file_obj.open("file.dat",ios::out | ios::binary | ios::app);
        if(file_obj.is_open()){
            file_obj<<"Hello "<<name;
            file_obj<<"You are learning Binary files !";
            file_obj.close();
            cout<<"\nFile writing operation successful !!";
        }
        else{
            cout<<"Error to open the file : ";
        }
        return 0;
    }