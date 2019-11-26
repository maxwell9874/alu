#include<iostream>
using namespace std;
void swap_refference(int *x,int *y)
{	
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int a,b;
	cout<<"Enter 2 numbers \n";
	cin>>a>>b;
	cout<< " \n Numbers before swapping are : " << a <<"\t" << b;
	swap_refference(&a,&b);
	cout<< " \n Numbers after swapping are : " << a <<"\t" << b;
	return 0;
}