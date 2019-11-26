#include<iostream>
using namespace std;
class Shape
{
	public:
				int l;
				int b;
				int h;
				int r;
				/*void volume()
				void surface_area()*/
};
class box:public Shape
{
	public:
				void getin()
				{
					cout<<"\n-------THIS IS A BOX-------";
					cout<<"\nEnter Length : ";
					cin>>l;
					cout<<"\nEnter Breadth :";
					cin>>b;
					cout<<"\nEnter Height : ";
					cin>>h;
				}
				void display_parameter()
				{
					cout<<"\nThe Length is : "<<l;
					cout<<"\nThe Breadth is : "<<b;
					cout<<"\nThe Height is : "<<h;
				}
				void calvol()
				{
					int volume=h*l*b;
					cout<<"\nThe volume of the box: "<<volume;
				}
				void surface_area()
				{
					int area=(2*(h*b))+(2*(h*l))+(2*(b*l));
					cout<<"\nThe surface area of the box: "<<area;
				}
};
class cube:public Shape
{
	public:
				void getin()
				{
					cout<<"\n\n-------THIS IS A CUBE------";
					cout<<"\nEnter Side  : ";
					cin>>l;
				}
				void display_parameter()
				{
					cout<<"\nThe Side is : "<<l;
				}
				void calvol()
				{
					int volume=l*l*l;
					cout<<"\nThe volume of the cube : "<<volume;
					}
				void surface_area()
				{
					int area=6*l*l;
					cout<<"\nThe surface area of the cube : "<<area;
				} 
};
class cylinder:public Shape
{
	public:
				void getin()
				{
					cout<<"\n\n------THIS IS A CYLINDER-------";
					cout<<"\nEnter Radius : ";
					cin>>r;
					cout<<"\nEnter Height : ";
					cin>>h;
				}
				void display_parameter()
				{
					cout<<"\nThe Radius is : "<<r<<"\nThe Height is : "<<h;
				}
				void calvol() 
				{
					int volume=3.14*r*r*h;
					cout<<"\nThe volume of the box : "<<volume;
				}
				void surface_area()
				{
					int area=((2*3.14*r*h)+(2*3.14*r*r));
					cout<<"\nThe surface area of the cylinder : "<<area;
				} 
};
int main()
{
	box b;
	cube c;
	cylinder cy;
	b.getin();
	b.display_parameter();
	b.calvol();
	b.surface_area();
	c.getin();
	c.display_parameter();
	c.calvol();
	c.surface_area();
	cy.getin();
	cy.display_parameter();
	cy.calvol();
	cy.surface_area();
	return 0;
}
