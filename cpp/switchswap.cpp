#include<iostream>
#include<stdlib.h>
using namespace std;
void swap_value(int x,int y)
{
	int temp;
	temp = x;
	x=y;
	y=temp;
	cout<<"The numbers after swapping is : \n" << x << "\t" << y;
}

void swap_refference(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int a,b,choice;
	while(1) 
	{
		cout<<"\n Enter your choice : \n"<<"1.SWAP USING CALL BY VALUE \n" <<"2.SWAP USING CALL BY REFFERENCE \n"<<"3.EXIT \n";
		cin>> choice;
		switch(choice)
		 {
		 	case 1 :
						cout<<" \n Enter 2 numbers --> \n";
						cin>> a>>b;
						cout<<" \n The numbers before swapping are \n" << a << "\t" << b <<endl;
						swap_value(a,b);
						break;
			case 2 :
						cout<<"Enter 2 numbers \n";
						cin>> a>>b;
						cout<<" \n The numbers before swapping are :\n" << a << "\t" << b <<endl;
						swap_refference(&a,&b);
						cout<<"\n The numbers after swapping  : \n " <<  a << "\t" <<b;
						break;
			case 3 :
						exit(0);
			default : 
						cout<<"INVALID \n";
						break;
		 }
	}
	return 0;
}

