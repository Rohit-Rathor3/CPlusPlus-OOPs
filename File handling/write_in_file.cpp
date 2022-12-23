/* we can open a file by using two methods 
1. constructor 2. by using open() function.
here , i am using constructor method. */
#include<iostream>
#include<fstream> // This is header file for fstream , ifstream , ofstream class
using namespace std;
int main()
{
    ofstream file_obj("file.txt", ios::app); // file will create if does not present .
    if(file_obj.is_open()) // to check file is opened or not
    {
        file_obj<<"Welcome to c++ , i am learning file handling\n";
        file_obj<<"hi, c++ is a good programming language\n";
        file_obj.close();
        cout<<"File writing operation successful : ";
    }
    else{
        cout<<"Error --> To open the file";
    }

return 0;
}