#include<iostream>
#include<string.h>
using namespace std;
class publication
{
	private:
				double price,cost;
				string title;
				string name;
	public:
				void getdata()
				{
					cout<<"\nEnter the title of the Book:"<<endl;
					cin>>title;
				    cout<<"\nEnter the price of the Book:"<<endl; 
					cin>>price;
					cout<<"\nEnter the title of the Tape:"<<endl;
					cin>>name;
					cout<<"\nEnter the cost of the Tape:"<<endl; 
					cin>>cost;
				}
				void putdata()
				{
					cout<<"The title of the Book is:"<<title<<endl;
					cout<<"Price of this Book is:"<<price<<endl;
					cout<<"The title of the Tape is:"<<name<<endl;
					cout<<"Cost of this Tape is:"<<cost<<endl;
				}
};
class Book:public publication
{
	private:
				int count;
	public:
				void getdata()
				{
					//publication::getdata();
					cout<<"Enter the page count of the book:"<<endl;
					cin>>count;
				}
				void putdata()
				{
					//publication::putdata();
					cout<<"the page count of the book is:"<<count<<endl;
				}
};
class Tape:public publication
{
	private:
				double min;
	public:
				void getdata()
				{
					//publication::getdata();
					cout<<"Enter the minutes of the tape: "<<endl;
					cin>>min;
				}
				void putdata()
				{
					//publication::putdata();
					cout<<"\nThe time of the tape is:"<<min<<"min";
			    }  
};
int main() 
{
	publication p;
	p.getdata();
	p.putdata();
	Book b;
	b.getdata();
	b.putdata();
	Tape t;
	t.getdata();
	t.putdata();
}
 