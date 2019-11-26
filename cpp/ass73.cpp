#include<iostream>
#include<string.h>
using namespace std;
class String
{	
	char str[100];
	int len;
   
   	public :
		void read(); 
		void read1();
		void print();
		void print1(); 
   
   
    friend int operator == (String, String);
    friend int operator > (String, String);
};

    
void String :: read()
{
    cout << "\nEnter your 1st string : " ;
    cin >> str;
    len=strlen(str) ;
}

void String :: read1()
{
    cout << "\nEnter your 2nd string : " ;
    cin >> str;
    len=strlen(str) ;
}
   
void String :: print()
{
    cout << "Your 1st  string is " << str << endl ;
}
  
 void String :: print1()
{
    cout << "Your 2nd  string is " << str << endl ;
}
  

int operator == (String s, String t)
{
    if (strcmp(s.str,t.str)==0)
	{
		return 1 ;
    }
	else
	{ 
        return 0 ;
	}
}

int operator > (String s, String t)
{
	int l1= strlen(s.str);
	int l2= strlen(t.str);
	if(l1>l2)
	{ 
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	String s1,s2;
    s1.read();
    s2.read1();
	s1.print();
	s2.print1();
  
    if(s1 == s2) 
	{ 
		cout << "\nBoth strings are same" <<endl ;
    }
	else
    {
		cout << "\nBoth strings are different"<<endl ;
    	if (s1>s2)
		{
			cout<<"\nString 1 is bigger tha String 2";
		}
		else
		{
			cout<<"\nString 2 is bigger than String 1\n";
		}
  	}
    return 0; 
}