#include<iostream>
using namespace std;

int main()
{
	int y1,y2,n;
	
	cout << "Enter the Year 1 & Year 2 :";
	cin >> y1 >> y2;
	
	n = (y2-y1)/4;
	
	int lY[n],i=0;
	
	for(int j=y1; j<y2; j++)
	{
		if(j %4 == 0)
		{
			lY[i] = j;
			i++;
		}
	}
	
	cout << "Leap year is :";
	for(int j=0; j<i; j++)
	{
		cout << " " << lY[j];
	}
	
	return 0;
}
