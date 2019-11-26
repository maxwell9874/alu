#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	char s[10][10],t[10];
	int i,j,n;
	cout<< "Enter the no. of names to be inserted" << endl;
	cin>> n;
	cout << n << "no. of names are :";
	for(i=0;i<n;i++)
	{
		cout<< " ";
		cin>> s[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(strcmp(s[j-1],s[j])>0)
			{
				strcpy(t,s[j-1]);
				strcpy(s[j-1],s[j]);
				strcpy(s[j],t);
			}
		}
	}
	cout<<"The sorted list is :"<< endl;
	for(i=0;i<n;i++)
	{
		cout<< endl << s[i];
	}
	return 0;
}