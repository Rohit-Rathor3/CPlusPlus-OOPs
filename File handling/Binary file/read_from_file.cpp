#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream file_obj;
    char output;
    file_obj.open("file.dat",ios::out | ios::in | ios::binary);
    if(file_obj)
    { 
        while(file_obj.read((char*) &output ,sizeof(char))){
        //file_obj>>output;
        cout<<output;
    }
    file_obj.close();
    }
    else{
        cout<<"Error to open the file !";
    }
    return 0;
}