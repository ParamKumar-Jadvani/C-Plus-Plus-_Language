#include <iostream>
using namespace std;

int getInt();
void user();

class A
{
private:
	int num;

public:
	void setData()
	{
		cout << "Enter Number : ";
		this->num = getInt();
	}

	void getData()
	{
		cout << endl
			 << "Number\t=>" << this->num << endl;
	}

	bool operator>(A n2)
	{
		if (this->num > n2.num)
			return true;
		else
			return false;
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
	A n1, n2;

	n1.setData();
	n1.getData();

	n2.setData();
	n2.getData();

	(n1 > n2)
		? cout << "N1 is max" << endl
		: cout << "N2 is max" << endl;
}