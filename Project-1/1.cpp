#include <iostream>
using namespace std;

class Measurement
{
public:
	double inch, feet;
};

double getFloat()
{
	double n;
	cin >> n;
	return n;
}

int main()
{
	Measurement h1, h2, h3;

	cout << "1) Enter Height in Feet & Inch 1 :";
	h1.feet = getFloat();
	h1.inch = getFloat();

	cout << "2) Enter Height in Feet & Inch 1 :";
	h2.feet = getFloat();
	h2.inch = getFloat();

	h3.inch = h1.inch + h2.inch;
	h3.feet = h1.feet + h2.feet;

	if (h3.inch >= 12)
	{
		h3.feet = h3.inch / 12;
		h3.inch %= 12;
	}

	cout << h3.feet << "  " << h3.inch;

	return 0;
}
