#include<iostream>
using namespace std;
class box
{
	 int l,b,h;
	 public:
  	 box()  
	 {
	 }
 	 box(int x,int y,int z)
     { 
	 		l=x; b=y; h=z; 
	 }
 	 void display();
 	 box operator++(int);
	 box operator++();
 	 box operator+(box);
 };
 
box box::operator++(int)
{
	box t;
	t.l=l++;
	t.b=b++;
	t.h=h++;
	return t;
}

box box::operator++()
{
	box t;
	t.l=++l;
	t.b=++b;
	t.h=++h;
	return t;
}

box box::operator+(box c)
{ 
	box t;
    t.l=l+c.l;
    t.b=b+c.b;
    t.h=h+c.h;
    return t;
}

void box::display()
{
	cout << "The length is " << l << "\t ";
	cout << "The breadth is " << b << "\t ";
	cout << "The height is" << h << endl;
}

int main()
{
	box b1=box(15,25,35);
	box b2=box(20,30,40);
	box b3;
	b3=b1+b2;
	b1.display();
	b2.display();
	b3.display();
	b3=b1++;
	b1.display();
	b3.display();
//	cout<<"hi";
	b3=++b1;
	b1.display();
	b3.display();
	return 0;
}