#include<iostream>
using namespace std;

int getInt();
void user();

class X
{
	protected :
		int a, b, c;
};

class Y : public X
{
	public :
		void setData()
		{
			cout << "Enter a : ";
			a = getInt();
			
			cout << "Enter B : ";
			b = getInt();
			
			cout << "Enetr C :";
			c = getInt();
		}
		
		void getData()
		{
			cout << "A Qube is \t=>" << a*a*a << endl
				 << "B Qube is \t=>" << b*b*b << endl
				 << "C Qube is \t=>" << c*c*c << endl << endl
				 << "All Number sum is " << (a*a*a) + (b*b*b) + (c*c*c) << endl;
		}
};

int main()
{
	user();
	return 0;
}

int getInt()
{
	int n;
	cin >>n;
	return n;
}

void user()
{
	Y q1;
	
	q1.setData();
	q1.getData();
}