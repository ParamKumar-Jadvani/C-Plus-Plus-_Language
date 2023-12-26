#include<iostream>
using namespace std;

void user();

class Cricket
{
	public : 
		void getTotalOvers()
		{
			cout << "Cricket has 3 Format" << endl;
		}
};

class T20Match : public Cricket
{
	public :
		void getTotalOvers()
		{
			cout << "T20 format has 20 overs match " << endl;
		}
};

class TestMatch : public Cricket
{
	public : 
		void getTotalOvers()
		{
			cout << "Test match has 90 overs match " << endl;
		}
};

int main()
{
	user();
	return 0;
}

void user()
{
	T20Match t1;
	TestMatch c1;
	
	t1.getTotalOvers();
	c1.getTotalOvers();
}