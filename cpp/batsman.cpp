#include <iostream>
#include <cstring>
#include <cstdlib>
	
using namespace std;

class batsman
{
	private:
		int runs, fours, sixes, out, balls;
		string name;

	public:

		void set()
		{
			system("clear");
			cout<<"\n\nEnter the Player's Name: \t";
			getline(cin,name);
			runs = 0;
			fours = 0;
			sixes = 0;
			out = 0;
			balls = 0;
		}

		void update(int fours,int sixes,int out)
		{

			this->fours += fours;
			this->sixes += sixes;
			this->out = out;

			balls = balls + fours + sixes;
			runs = runs + 4*fours + 6*sixes;

			show();
		}

		void show()
		{
			if(out == 1)
				cout<<"\n\nPlayer Name:-\t"<<name<<"\n-------------------------------------------";

			cout<<"\n|----------------------------|\n";
			cout<<"| Runs = "<<runs<<"                  |\n";
			cout<<"| Fours = "<<fours<<"                  |\n";
			cout<<"| Sixes = "<<sixes<<"                  |\n";
			cout<<"|----------------------------|\n";

			if(out == 1)
			{
				cout<<"| Balls = \t"<<balls<<"            |\n";
				cout<<"|----------------------------|";
				cout<<"\n## GAME OVER ##\n";
			}
		}
};

int main()
{

	batsman b1;

	b1.set();
	int runs,fours,sixes,out,balls;

	do
	{
		cout<<"\n\n****** Enter the updates *******\n\n";

		cout<<"Fours: \t";
		cin>>fours;

		cout<<"Sixes: \t";
		cin>>sixes;

		cout<<"Out: \t";
		cin>>out;

		b1.update(fours,sixes,out);

	}while(out==0);

}
