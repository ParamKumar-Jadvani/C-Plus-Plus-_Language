#include <iostream>
using namespace std;

int getInt();

class A
{
protected:
	int a;

public:
	void setDataA()
	{
		cout << "Enter A : ";
		this->a = getInt();
	}
};

class B : public A
{
protected:
	int b;

public:
	void setDataB()
	{
		cout << "Enter B : ";
		this->b = getInt();
	}
};

class C : public A
{
protected:
	int c;

public:
	void setDataC()
	{
		cout << "Enter C  :";
		this->c = getInt();
	}
};

class D : public B, C
{
protected:
	int d;

public:
	D()
	{
		B::setDataA();
		B::setDataB();
		C::setDataC();
		cout << "Enter D : ";
		this->d = getInt();
	}

	void sum()
	{
		cout << "Sum of all Number is : " << B::a << " + " << b << " + " << c << " + " << this->d << " = " << B::a + b + c + this->d;
	}
};

int main()
{
	D s1;
	s1.sum();

	return 0;
}

int getInt()
{
	int n;
	cin >> n;
	return n;
}
