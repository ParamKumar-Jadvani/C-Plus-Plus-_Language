#include<iostream>
using namespace std;

int getInt()
{
	int n;
	cin >> n;
	return n;
}


void checkData(int a, int b)
{	
	char error[] ="ZERO CAN NOT DIVIDE BY NUMBER !";
	
	try
	{
		if(a!=0 && b!=0)
			throw a/b;
		else
			throw error;
	}
	catch(int n)
	{
		cout << a << " / " << b << " = " << n << endl;
	}
	catch(char e[])
	{
		cout << e << endl;
	}
}

int main()
{
	cout << "Enter 1st Number : ";
	int x = getInt();
	
	cout << "Enter 2nd Number: ";
	int y = getInt();
	
	checkData( x,  y);
}