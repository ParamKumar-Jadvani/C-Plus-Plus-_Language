#include<iostream>
using namespace std;

int fact(int n)
{
	if(n>1)
		return n*fact(n-1);
	else
		return 1;
}

int getInt()
{
	int n;
	cin >> n;
	return n;
}

int main()
{
	cout << "Enter Any Number : ";
	int n = getInt();
	
	int factorial = fact(n);
	
	cout << n << " Number Factoraial is : " << factorial << endl;	
}