#include <iostream>
using namespace std;

class Time
{
public:
	int seconds, minutes, hours;
};

int main()
{
	Time t1;

	cout << "Enter YOur Seconds : ";
	cin >> t1.seconds;

	t1.hours = t1.seconds / 3600;
	t1.minutes = (t1.seconds % 3600) / 60;
	t1.seconds = (t1.minutes % 60) / 60;

	cout << t1.hours << " hour " << t1.minutes << " minutes " << t1.seconds << " seconds " << endl;

	return 0;
}