#include<iostream>
using namespace std;

double getDouble();
void user();

class RBI
{
	protected : 
		double netProfit, costOfInvestment = 14;
};

class SBI : public RBI
{
	public : 
		void setData()
		{
			cout << "Enter SBI bank Net Profit : ";
			netProfit  = getDouble();
		}
		
		void getData()
		{
			cout << "SBI bank Rate of Interset is : " << (netProfit/costOfInvestment)*100 << endl << endl;
		}
};

class BOB : public RBI
{
	public : 
		void setData()
		{
			cout << "Enter BOB bank Net Profit : ";
			netProfit  = getDouble();
		}
		
		void getData()
		{
			cout << "BOB bank Rate of Interset is : " << (netProfit/costOfInvestment)*100 << endl << endl;
		}
};

class ICICI : public RBI
{
	public : 
		void setData()
		{
			cout << "Enter ICICI bank Net Profit : ";
			netProfit  = getDouble();
		}
		
		void getData()
		{
			cout << "ICICI bank Rate of Interset is : " << (netProfit/costOfInvestment)*100 << endl << endl;
		}
};

int main()
{
	user();
	return 0;
}

double getDouble()
{
	double n;
	cin >> n;
	return n;
}

void user()
{
	SBI s;
	BOB b;
	ICICI i;
	
	s.setData();
	b.setData();
	i.setData();
	
	s.getData();
	b.getData();
	i.getData();
}
