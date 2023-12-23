#include <iostream>
using namespace std;

int getInt();
void user();

class Result
{
private:
	int sub;

public:
	// Setter
	void setMarks()
	{
		this->sub = getInt();
	}

	// Getter
	void getmarks()
	{
		cout << this->sub << endl;
	}

	Result operator+(int i)
	{
		Result temp;

		temp.sub = this->sub + i;
		return temp;
	}

	Result operator-(int i)
	{
		Result temp;

		temp.sub = this->sub - i;
		return temp;
	}

	friend void user();
};

int main()
{
	user();
	return 0;
}

void user()
{
	Result sci, math, eng, guj, ss, com, total;
	int i = 3;

	cout << "Science\t\t: ";
	sci.setMarks();

	cout << "Mathematics\t: ";
	math = sci - i; // sci.operator+(i);
	math.getmarks();

	i--;

	cout << "English\t\t: ";
	eng = math + i;
	eng.getmarks();

	cout << "Gujarati\t: ";
	guj = eng + i;
	guj.getmarks();

	i++;

	cout << "Social-Science\t: ";
	ss = guj - i;
	ss.getmarks();

	i++;

	cout << "Computer\t: ";
	com = ss + i;
	com.getmarks();

	total.sub = sci.sub + math.sub + eng.sub + guj.sub + ss.sub + com.sub;

	cout << endl
		 << "Your Total Marks is : ";
	total.getmarks();

	float per = ((float)total.sub) / 6;
	cout << endl
		 << "Your Persentage is : " << per;
}

int getInt()
{
	int n;
	cin >> n;
	return n;
}