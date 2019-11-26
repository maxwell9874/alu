#include <iostream>
using namespace std;

template <class T>
T findMin(T arr[],int n)
{
    int i;
    T min;
    min=arr[0];
    for(i=0;i<n;i++)
    {
         if(min > arr[i])
        min=arr[i];
    }
    return(min);
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

    cout<<"Generic Function to find Minimum from Array\n\n";
    cout<<"Integer Minimum is : "<<findMin(iarr,4)<<"\n";
    cout<<"Character Minimum is : "<<findMin(carr,4)<<"\n";
    cout<<"Double Minimum is : "<<findMin(darr,4)<<"\n";

    return 0;
}
