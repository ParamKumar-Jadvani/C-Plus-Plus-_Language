#include<iostream>
using namespace std;

class A
{
	public :
		//Getter
		void getData()
		{
			cout << "This is Method of A Class !! This Method will be override in future" << endl;
		}
};

class B : public A
{
	public :
		//Getter
		void getData()
		{
			cout << "This is Method of B Class !! This Method is be override in present" << endl;
		}
};

int main()
{
	B n1;
	n1.A::getData();
	n1.getData();
} 