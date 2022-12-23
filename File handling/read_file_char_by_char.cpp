/* Here, we will read the file character by character */
#include<iostream>
#include<fstream> // This is header file for fstream , ifstream , ofstream class
using namespace std;
int main()
{
    ifstream file_obj("file.txt");   // ifstream is a class and file_obj is a object of ofstream class.
    if(file_obj.is_open()){
        char output;
        while(file_obj>>output){ 
                                           
            cout<<output<<endl;
        }
        file_obj.close();
        cout<<"File reading operation successfull :";
    }
    else{
        cout<<"Error : To open the file :";
    }
    return 0;
}