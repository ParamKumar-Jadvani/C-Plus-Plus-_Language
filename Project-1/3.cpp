#include <iostream>
using namespace std;

class understand
{
private:
	int a, b;

public:
	int c, d;
};

int main()
{
	understand u1;

	cout << "Enter Your Two Number : ";
	cin >> u1.c >> u1.d;

	cout << endl
		 << "Your Two Number is " << u1.c << "\t" << u1.d << endl;

	cout << "Enter Your Two Number : ";
	cin >> u1.a >> u1.b;

	// Here, int a,b is a PRIVATE . so, we can not use them and not take input and not even print them.

	// Here, int c,d is PUBLIC . so, we can use them and take input and even print them .
}