#include <iostream>
#include <string.h>
using namespace std;

int getInt();
string getString();

class CustomerRecord
{
private:
	int id, age, mobile_number, simcard_validity;
	string name, city, telecom_brand_name;

public:
	// Set Data (Setter)
	void setData()
	{
		cout << endl
			 << "Enter Customer Details" << endl;

		cout << "Enter Id\t\t:";
		this->id = getInt();

		cout << "Enter Name\t\t:";
		this->name = getString();

		cout << "Enter Mobile Number\t:";
		this->mobile_number = getInt();

		cout << "Enter Age\t\t:";
		this->age = getInt();

		cout << "Enter Telecome Brand\t:";
		this->telecom_brand_name = getString();

		cout << "Enter Simcard Validity\t:";
		this->simcard_validity = getInt();

		cout << "Enetr City Name\t";
		this->city = getString();

		cout << endl;

		getData();
	}

	void getData()
	{
		cout << endl
			 << "Customer Details are" << endl
			 << "Id\t\t: " << this->id << endl
			 << "Name\t\t: " << this->name << endl
			 << "Mobile Number\t: " << this->mobile_number << endl
			 << "Age\t\t: " << this->age << endl
			 << "Telecome Brand is\t: " << this->telecom_brand_name << endl
			 << "Simacard Validity\t: " << this->simcard_validity << endl
			 << "City Name\t: " << this->city << endl
			 << endl;
	}
};

int getInt()
{
	int n;
	cin >> n;
	return 0;
}

string getString()
{
	string n;
	cin >> n;
	return n;
}

int main()
{
	CustomerRecord c1, c2, c3, c4, c5;

	c1.setData();
	c2.setData();
	c3.setData();
	c4.setData();
	c5.setData();

	return 0;
}
