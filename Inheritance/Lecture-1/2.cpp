#include<iostream>
using namespace std;

double getDouble();
void user();

class P
{
	protected :
		double t, f, k;
		
	public :
		void setDataTemprature()
		{
			cout << "Enter Temprature : ";
			this->t = getDouble();
		}
};

class Q : public P
{
	public : 
		void getFahrenheit()
		{
			f = (t*(9/5))+32;
			cout << "Fahrenheit\t=> " << f << endl;
		}
};

class R : public Q
{
	public :
		void getKelvinF()
		{
			k = (f -32) * (5 / 9 )+ 273.15;
			cout << "Kelvin\t\t=> " << k << endl; 
		}
		
		void getKelvinT()
		{
			k = t+273.15;
			cout << "Kelvin\t\t=> " << k << endl;
		}
};

int main()
{
	user();
	return 0;
}

double getDouble()
{
	int n;
	cin >> n;
	return n;
}

void user()
{
	R t1;
	
	t1.setDataTemprature();
	
	t1.getKelvinT();
	
	t1.getFahrenheit();
	
	t1.getKelvinF();
}
