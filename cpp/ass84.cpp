#include<iostream>
using namespace std;
class Student
{
	public:
				virtual void show() = 0;
};
class Engineering : public Student
{
	void show()
	{
		cout<<"\nThis is an Engineering Student"<<endl;
	}
	
};
class Medicine : public Student
{
	void show()
	{
		cout<<"\nThis is a Medicine Student"<<endl;		
	}
};

class Science : public Student
{
	void show()
	{
		cout<<"\nThis is a Science Student"<<endl;	
	}
};

int main()
{
	Student *bptr;
	Engineering e;
	Medicine m;
	Science s;
	bptr = &e;
	bptr->show();
	bptr = &m;
	bptr->show();
	bptr = &s;
	bptr->show();
}