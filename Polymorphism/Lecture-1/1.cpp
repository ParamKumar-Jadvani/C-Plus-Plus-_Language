#include <iostream>
using namespace std;

int getInt();
void user();
void getData();

class A
{
public:
	void operations(int num, int num1)
	{
		cout << num << " / " << num1 << " = " << num / num1;
	}

	void operations(int num, int num1, int num2)
	{
		cout << num << " - " << num1 << " - " << num2 << " = " << num - num1 - num2;
	}

	void operations(int num, int num1, int num2, int num3)
	{
		cout << num << " * " << num1 << " * " << num2 << " * " << num3 << " = " << num * num1 * num2 * num3;
	}

	void operations(int num, int num1, int num2, int num3, int num4)
	{
		cout << num << " + " << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " = " << num + num1 + num2 + num3 + num4;
	}
};

class B : public A
{
public:
	void calc()
	{
		int num, num1, num2, num3, num4;

		cout << "\t---Calculator---" << endl
			 << "Enter 1 for Division " << endl
			 << "Enter 2 for Subtraction " << endl
			 << "Enter 3 for Multiplicaion " << endl
			 << "Enter 4 for Addition " << endl;
		int n = getInt();

		switch (n)
		{
		case 1:
			cout << "Enter 1st Number : ";
			num = getInt();

			cout << "Enter 2nd Number : ";
			num1 = getInt();

			operations(num, num1);
			break;

		case 2:
			cout << "Enter 1st Number : ";
			num = getInt();

			cout << "Enter 2nd Number : ";
			num1 = getInt();

			cout << "Enter 3rd Number : ";
			num2 = getInt();

			operations(num, num1, num2);
			break;

		case 3:
			cout << "Enter 1st Number : ";
			num = getInt();

			cout << "Enter 2nd Number : ";
			num1 = getInt();

			cout << "Enter 3rd Number : ";
			num2 = getInt();

			cout << "Enter 4th Number : ";
			num3 = getInt();

			operations(num, num1, num2, num3);
			break;

		case 4:
			cout << "Enter 1st Number : ";
			num = getInt();

			cout << "Enter 2nd Number : ";
			num1 = getInt();

			cout << "Enter 3rd Number : ";
			num2 = getInt();

			cout << "Enter 4th Number : ";
			num3 = getInt();

			cout << "Enter 5th Number : ";
			num4 = getInt();

			operations(num, num1, num2, num3, num4);
			break;
		}
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
	cin >> n;
	return n;
}

void user()
{
	B b1;

	b1.calc();
}