#include<iostream>
using namespace std;
class Student
{
	private:
				string roll,name;
	public:
				void getName(string name)
				{
					this->name = name;
				}
				void getRoll(string roll)
				{
					this->roll = roll;
				}
				void display()
				{
					cout<<"\nName of student : "<<this->name;
					cout<<"\nRoll of student : "<<this->roll;
				}
};
class Test : public  Student
{
	private:
				int marks1, marks2;
	public:
				void getData(int marks1, int marks2)
				{
					this->marks1 = marks1;
					this->marks2 = marks2;
				}
				int getMarks1()
				{
					return marks1;
				}
				int getMarks2()
				{
					return marks2;
				}
};
class Result : public Test
{
	private:
				int sum;
	public:
				int total()
				{
					sum = getMarks1() + getMarks2();
					return sum;
				}
};
int main()
{
	Result CSE;
	CSE.getName("ARKA BANERJEE");
	CSE.getRoll("11500217050");
	CSE.display();
	CSE.getData(100,100);
	int marks1 = CSE.getMarks1();
	int marks2 = CSE.getMarks2();
	cout<<"\nMARKS1 is : "<<marks1<<"\nMARKS2 is : "<<marks2;
	int total = CSE.total();
	cout<<"\nTotal Marks obtained is : "<<total<<endl;
}