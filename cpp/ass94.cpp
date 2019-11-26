#include<iostream>
using namespace std;
template<class bubble>
void b_sort(bubble a[], int n)
{
	int i, j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				bubble element;
				element = a[i];
				a[i] = a[j];
				a[j] = element;
			}
		}
	}
}

int main()
{
    int iarr[4];
    char carr[4];
    double darr[4];
    cout << "Integer Values \n";
    for(int i=0; i < 4; i++)
    {
        cout << "Enter integer value "  << i+1 << " : ";
        cin >> iarr[i];
    }

    cout << "Character values \n";
    for(int j=0; j < 4; j++)
    {
        cout << "Enter character value " << j+1 << " : ";
        cin >> carr[j];
    }


    cout << "Decimal values \n";
    for(int k=0; k < 4; k++)
    {
        cout << "Enter decimal value " << k+1 << " : ";
        cin >> darr[k];
    }
    b_sort(iarr,4);
    cout<<"\nSorted Order Integers: ";
    for(int i=0;i<4;i++)
    {
        cout<<iarr[i]<<"\t";
    }
    b_sort(carr,4);
    cout<<"\nSorted Order Characters: ";
    for(int j=0;j<4;j++)
    {
        cout<<carr[j]<<"\t";
    }
    b_sort(darr,4);
    cout<<"\nSorted Order Decimals: ";
    for(int k=0;k<4;k++)
    {
        cout<<darr[k]<<"\t";
    }
    
}