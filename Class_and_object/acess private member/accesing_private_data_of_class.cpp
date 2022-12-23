#include<iostream>
using namespace std;
class privateClass{
	private:
		int value;
		void privateMethod()
		{
			cout<<"Hi , Guys I'm private method of class!!!!!";
		}
	public:
		// accessing the private data of class.
		void setValue(int n)
		{
			value=n;
		}
		int getValue()
		{
			return value;
		}
		
		// accessing the private method of the class
		void getMethod()
		{
			privateMethod();
		}
};
int main(){
privateClass c1;
c1.setValue(6174);
cout<<"You set "<<c1.getValue()<<" in the function"<<endl;
c1.getMethod();  // This is a public method , but by using it we are accessing the private 
                 // method of class.
return 0;
}

