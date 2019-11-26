#include<iostream>
using namespace std;
int main()
{
	float sub_marks[10],Total=0,Average;
	int i,n;
	char sub_name[10][10];
	cout<< "Enter the total no. of subject \n";
	cin>> n;
	cout<< "Enter the name of "<< n <<"subject :" <<  endl;
	for(i=0;i<n;i++)
	{
		cin>>sub_name[i];
	}
	cout<< "Enter the marks of"<< n <<" subject :" <<  endl;
	for(i=0;i<n;i++)
	{
		cin>>sub_marks[i];
	}
	for(i=0;i<n;i++)
	{
		Total = Total + sub_marks[i];
	}
	Average = Total/n;
	for(i=0;i<n;i++)
	{
		//cout<<"MARKS OBTAINED for subject"<<i+1<<" ::\n" <<sub_marks[i]<<endl;//
		cout<<" \n SUBJECT "<<i+1 <<"::" <<sub_name[i] << " \t  \t MARKS ::" <<sub_marks[i] ;
	}
		cout<<"\n"<<"TOTAL MARKS \t AVERAGE MARKS \n" <<  Total << "\t     \t" << Average;
	return 0;
} 