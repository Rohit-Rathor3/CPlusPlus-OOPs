/* In this program we will store the details of a student in the file */
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student{
    int rollNo;
    char name[30];
    char branch[5];
    public:
    void getdata(){
        cout<<"Enter Rool No :- ";
        //cin.ignore();
        cin>>rollNo;
        cout<<"\nEnter Name :- ";
        cin.ignore();
        cin.getline(name,20);
        cout<<"Enter Branch :- ";
        //cin.ignore();
        cin>>branch;
    }
    void putdata(){
        cout<<"\nRoll No:- "<<rollNo;
        cout<<"\nName :- "<<name;
        cout<<"\nBranch :- "<<branch;
    }
};
int main(){
    //clrscr();
    student s1;
    // let save details in file
    fstream file_Obj("student.dat",ios::app | ios::binary);
    if(file_Obj.is_open()){
        s1.getdata();
        file_Obj.write((char*)&s1 , sizeof(s1));
        cout<<"Record Added Successfully !!";
        file_Obj.close();
    }
    else{
        cout<<"Error to save the file!";
    }
   
    ifstream file_obj;
    file_obj.open("student.dat", ios::in | ios::binary);
    if(file_obj.is_open()){
        //file_obj.seekg(0);
        
        while(!file_obj.eof()){

        file_obj.read((char*)&s1 ,sizeof(s1));

        s1.putdata();
        }
         file_obj.close();
        cout<<"\n\tFile reading operation successful!";
       
    }
    else{
        cout<<"Error to reading the file !";
    }

    
    return 0;
}