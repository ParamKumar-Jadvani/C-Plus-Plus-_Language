#include<iostream>
using namespace std;

int getInt();

class Number
{
	protected :
		int n;
		
	public :
		Number()
		{
			cout << endl << "Enter Number : ";
			this->n = getInt();
		}
};

class Square : public Number
{
	public :
		void getSqaure()
		{
			cout << "Sqaure of Number is : " << n*n << endl;
		}
};

class Qube : public Number
{
	public :
		void getQube()
		{
			cout << "Qube of Number is : " << n*n*n << endl;
		}
};

int main()
{
	Square s1;
	s1.getSqaure();
	
	Qube q1;
	q1.getQube();
	
	return 0;
}

int getInt()
{
	int n;
	cin >> n;
	return n;
}
