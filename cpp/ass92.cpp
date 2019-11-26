#include<iostream>
using namespace std;
class  base 
{	
	private: 
		int x;
		float y;
	public : 
		virtual void getdata( );
		virtual void display( );
};
class dev : public base
{
	private:  
		int roll;
		char name[20];
	public : 
		void getdata( );
		void  display( );
};	
void base :: getdata( )  
{  
}
void base :: display( )   
{ 
}
			
void dev :: getdata( )
{
	cout<<"Enter Roll of  the Student : ";
	cin>> roll;
	cout<<"Enter name of  the student :";
	cin>>name;
}
void dev :: display( )
{
	cout<<"Name is :"<<name<<endl;
	cout<<"Roll no is :"<<roll <<endl;
}
			
int main( )
{
	base * ptr;
	dev obj;
	ptr = &obj;
	ptr -> getdata( );
	ptr -> display( );
	return 0;
}