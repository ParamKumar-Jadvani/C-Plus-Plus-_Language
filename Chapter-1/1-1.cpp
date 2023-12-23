#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter the Size :";
	cin >> n;

	int a[n];

	cout << "Enter the Array Elements :" << endl
		 << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] :";
		cin >> a[i];
	}

	cout << "Even Number of an Array is :" << endl;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			cout << " " << a[i];
	}

	return 0;
}
