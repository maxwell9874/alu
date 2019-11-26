#include<iostream>
using namespace std;

class B;


class A {

	private : 
		int r1,i1;

	public :
		void display()
		{
			cout<< "Value of 1st real part is == \n" << r1<< "\n";
			cout<< "Value of 1st imaginary part is == \n" << i1<< "\n";
			cout<<"The whole number is :"<<r1 << "+i" <<i1 <<"\n";
		}
		void getdata()
		{
			cout<< "Value of 1st real part is == \n";
			cin>> r1;
			cout<< "Value of 1st imaginary part is == \n";
			cin>> i1;
		}

	friend void compadd(A,B);
};


class B {
	private :
		int r2,i2;
	
	public  :
		void display()
		{
			cout<< "Value of 1st real part is == \n" << r2<< "\n";
			cout<< "Value of 1st imaginary part is == \n" << i2<< "\n";
			cout<<"The whole number is :"<<r2 << "+i" <<i2 << "\n";
		}
		void getdata()
		{
			cout<< "Value of 1st real part is == \n";
			cin>> r2;
			cout<< "Value of 1st imaginary part is == \n";
			cin>> i2;
		}
		

	friend void compadd(A,B);
};

void compadd(A ob1,B ob2)
{
	cout<< "THE ADDITION IS  : \n" <<(ob1.r1 + ob2.r2)<<"+i"<<(ob1.i1+ob2.i2);
}	

int main()
{
	A a1;
	B b1;
	a1.getdata();
	a1.display();
	b1.getdata();
	b1.display();
	compadd(a1,b1);
}
