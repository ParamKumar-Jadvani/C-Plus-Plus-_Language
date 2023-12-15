#include<iostream>
using namespace std;

class Measurement
{
	public :
		float inch, feet ;
};

float getFloat()
{
	float n;
	cin >> n;
	return n;
}

int main()
{
	Measurement i1, i2, i3, f1, f2, f3;
	
	cout << "1) Enter Height in Feet & Inch 1 :";
	f1.feet = getFloat();
	i1.inch = getFloat();
	
	cout << "2) Enter Height in Feet & Inch 1 :";
	f2.feet = getFloat();
	i2.inch = getFloat();
	
	i3.inch = i1.inch + i2.inch;
	f3.feet = f1.feet + f2.feet;
	
	if(i3.inch >= 12)
	{
		 i3.inch /= 12;
		 f3.feet++;
	}
	
	
	cout << f3.feet << "  " << i3.inch ;
	
	
	return 0;	
}
