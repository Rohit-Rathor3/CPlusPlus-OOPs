/* Here , we will make a program to learn read and write a file with an example */
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    char name[30];
    int age;
    string contactNo;
    // writing in file
    ofstream getdata("student.txt",ios::app);
    if(getdata.is_open()){
        cout<<"Enter Your Name : ";
        cin.getline(name,30);
        cin.ignore();     // to clear one or more characters from the input buffer
        getdata<<"Name :- "<<name<<endl;
        cout<<"\nEnter Your age : ";
        cin>>age;
        cin.ignore();
        getdata<<"Age :- "<<age<<endl;
        cout<<"\nEnter Your contact number : ";
        cin>>contactNo;
        cin.ignore();
        getdata<<"Contact No :- "<<contactNo<<endl;
        getdata.close();
    }
    
    else{
        cout<<"Error :- To open the file : ";
    }
    // reading a file 
    string read;
    ifstream showdata("student.txt");
    if(showdata.is_open()){
        cout<<"\nReading a file : ";
        while(getline(showdata, read))
         {
            cout<<read<<endl;
        }
        showdata.close();
    }
    else{
        cout<<"error: to open the file ";
    }

return 0;
}