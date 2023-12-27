#include<iostream>
using namespace std;

int getInt();

class A
{
	protected : 
		int a;
	public :
		A()
		{
			cout << "Enter A : ";
			this->a = getInt();
		}
};

class B : public A
{
	protected : 
		int b;
	public :
		B()
		{
			cout << "Enter B : ";
			this->b = getInt();
		}
};

class C : public A
{
	protected : 
		int c;
	public :
		C()
		{
			cout << "Enter C  :";
			this->c = getInt();
		}
};

class D : public B,C
{
	protected : 
		int d;
	public : 
		D()
		{
			cout << "Enter D : ";
			this->d = getInt();
		}
		
		void sum()
		{
			cout << "Sum of all Number is : " << B::a << " + " << b << " + " << c << " + " << this->d << " = " << B::a+b+c+this->d;
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
