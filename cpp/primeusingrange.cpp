#include<iostream>
using namespace std;
int main()
{
	int i,max_range,num,count;
	cout<<"Enter the maximum range up to the limit \n";
	cin>> max_range;
	for(num=1;num<=max_range;num++)
	{
		count = 0;
		for(i=2;i<=num/2;i++)
		{
			if(num%i == 0)
			{
				count++;
				break;
			}
		}
		if(count == 0 && num != 1)
		{
			cout<<"\n The  prime number up to " << max_range << "is :" << num;
		}
	}
	return 0;
}