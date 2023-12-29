#include<iostream>
using namespace std;

void user();

class A
{
	public : 
		//Getter
		void getDataA()
		{
			cout << "This Method is Represent to the Class A" << endl;
		}
};

class B : public A
{
	public : 
		//Getter
		void getDataB()
		{
			cout << "This Method is Represent to the Class B" << endl;
		}
};

class C : public A
{
	public : 
		//Getter
		void getDataC()
		{
			cout << "This Method is Represent to the Class C" << endl;
		}
};

class D : public B, public C
{
	public :
		//Getter
		void getDataD()
		{
			cout << "This Method is Represent to the Class D" << endl;
		}
};

int main()
{
	user();
	return 0;	
}

void user()
{
	D n1;
	
	n1.B::getDataA(); // Here We Get Error => request for memeber 'getDataA' is ambiguos;
	n1.getDataB();
	n1.getDataC();
	n1.getDataD();
}