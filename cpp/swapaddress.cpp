#include<iostream>
using namespace std;
void swap_address(int *x,int *y)
{
	int temp;
	cout<< " \n Numbers before swapping are : " << *x <<"\t" << *y;
	temp = *x;
	*x = *y;
	*y =temp;
	cout<< " \n Numbers after swapping are : " << *x <<"\t" << *y;
}

int main()
{
	int a,b;
	cout<<"Enter 2 values : \n";
	cin >> a>> b;
	swap_address(&a,&b);
	return 0;
}
