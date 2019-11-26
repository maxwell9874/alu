#include<iostream>

using namespace std; 

class student
{
protected:
int rollno;
string name;
public:
void get_rollno(void);
void display_rollno(void);
};

class test: public student
{
protected:
//roll no.........inherited
int mark1, mark2;

//get_rollno......inherited
//display_rollno..inherited

public:
void get_marks(void);
void display_marks(void);
};

class result: public test
{
private:
int total;

//protected:
//roll no....inherited
//mark1......inherited
//mark2......inherited

public:
void display_result(void);
};



void student :: get_rollno()
{
cout<< "Enter roll number and name: ";
cin>>rollno;
cin>>name;
}

void student :: display_rollno()
{
cout<< "\nRoll number: "<< rollno;
cout<< "\n Name: "<<name;
}

void test :: get_marks()
{
cout<<"\nEnter marks in 1st subject ";
cin>> mark1;
cout<<"Enter marks in 2nd subject";
cin>>mark2;
}

void test :: display_marks()
{
cout<< "\nSubject 1: "<< mark1;
cout<< "\nSubject 2: "<< mark2;
}

void result :: display_result()
{
total = mark1 + mark2;
display_rollno();
display_marks();
cout<< "\nTotal: "<< total;
}

int main()
{
result st1;
st1.get_rollno();
st1.get_marks();
st1.display_result();
return 0;
}