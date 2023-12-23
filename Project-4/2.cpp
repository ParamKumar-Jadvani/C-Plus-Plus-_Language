#include <iostream>
#include <stdio.h>
using namespace std;

int getInt();
void user();

class KilometerConverter
{
private:
	int km, m;

public:
	void setKilometerData()
	{
		cout << endl
			 << "\t---Enter Given Data---" << endl
			 << "Kilometer : ";
		this->km = getInt();

		cout << "Meter : ";
		this->m = getInt();
	}

	void getkilometerData()
	{
		cout << endl
			 << "\t---Your Data---" << endl
			 << "Km : " << this->km << ", Meter : " << this->m << endl;
	}

	KilometerConverter operator+(KilometerConverter k2)
	{
		KilometerConverter temp;

		temp.km = this->km + k2.km;
		temp.m = this->m + k2.m;

		temp = converter(temp);
		return temp;
	}

	KilometerConverter converter(KilometerConverter temp)
	{
		if (temp.m >= 1000)
		{
			temp.km += temp.m / 1000;
			temp.m %= 1000;
		}
		return temp;
	}
};

void user()
{
	KilometerConverter k1, k2, k3;

	k1.setKilometerData();
	k2.setKilometerData();

	k3 = k1 + k2; // k1.operator+(k2);

	k3.getkilometerData();
}

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