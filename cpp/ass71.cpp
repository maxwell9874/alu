#include<iostream>
#include<math.h>
using namespace std;
struct complex
{
	float real;
	float img;
}s1,s2;
int main()
{
	float a,b;
	cout<<"\nEnter real and imaginary part of 1st complex number:\n";
	cin>>s1.real>>s1.img;
	cout<<"\nThe 1st number is : " << s1.real<<"+("<<s1.img<<"i)";
	cout<<"\nEnter real and imaginary part of 2nd complex number:\n";
	cin>>s2.real>>s2.img;
	cout<<"\nThe 2nd number is : " << s2.real<<"+("<<s2.img<<"i)";

	//Addition
	a=(s1.real)+(s2.real);
	b=(s1.img)+(s2.img);
	cout<<"\nAddition: "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";

	//Subtraction
	a=(s1.real)-(s2.real);
	b=(s1.img)-(s2.img);
	cout<<"\nSubtraction: "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";

	//Multiplication
	a=((s1.real)*(s2.real))-((s1.img)*(s2.img));
	b=((s1.real)*(s2.img))+((s2.real)*(s1.img));
	cout<<"\nMultiplication: "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";

	//Division
	a=(((s1.real)*(s2.real))+((s1.img)*(s2.img)))/(pow(s2.real,2)+pow(s2.img,2));
	b=(((s2.real)*(s1.img))-((s1.real)*(s2.img)))/(pow(s2.real,2)+pow(s2.img,2));
	cout<<"\nDivision: "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";

}