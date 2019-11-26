#include<iostream>
using namespace std;

class B;


class A {

	private : 
		int a;

	public :
		void display()
		{
			cout<< "Value of a is == \n" << a<< "\n";
		}
		void getdata()
		{
			cout<<"Enter 1st number \n";
			cin>> a;
		}

	friend void fun(A,B);
};


class B {
	private :
		int b;
	
	public  :
		void display()
		{
			cout<< "Value of b is == \n" << b<< "\n";
			
		}
		void getdata()
		{
			cout<<"Enter 2nd number \n";
			cin >> b;
		}

	friend void fun(A,B);
};

void fun(A ob1,B ob2)
{
	cout<< "THE ADDITION IS  : \n" <<(ob1.a + ob2.b);
}	

int main()
{
	A a1;
	B b1;
	a1.getdata();
	a1.display();
	b1.getdata();
	b1.display();
	fun(a1,b1);
}
