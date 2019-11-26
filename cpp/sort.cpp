#include<iostream>
using namespace std;
int bubble_sort(int *p,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(*(p+j)>*(p+j+1)) //for ascending no. printing
			{
				int temp;
				temp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = temp;
			}
			
		//	if(*(p+j)<*(p+j+1)) //for descending no. printing
		//	{
		//		int temp;
		//		temp = *(p+j);
		//		*(p+j) = *(p+j+1);
		//		*(p+j+1) = temp;
		//	}
		}
	}
}
int main()
{
	int a[100],n,i;
	cout<<"Enter the no. of elements :" << endl;
	cin>> n;
	cout<< n << "Elements are:" << endl;
	for(i=0;i<n;i++)
	{
		cout<<(i+1)<<"no. of elementsa are :";
		cin>> a[i];
	}
	bubble_sort(a,n);
	cout<<"The sorted list is :" << endl;
	for(i=0;i<n;i++)
	{
		cout<< endl <<a[i] ;
  	}
	return 0;
}