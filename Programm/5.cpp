#include<iostream>
#include<conio.h>
using namespace std;

int getInt();
string getString();
void user();

class HotelSystem
{
	public : 
		//Setter 
		HotelSystem (int Number, int Rating, string Name, string Type, string Location)
		{
			cout << "\t\t--BANK DATA---" << endl << endl
				 << "Number\tName\tType\tRating\tLocation" << endl
				 << "------\t----\t----\t------\t--------" << endl << endl
				 << Number << "\t" << Name << "\t" << Type << Rating << Location << endl << endl
				 << "Enter Any Key To go Forward !!" << endl;
			getch();				 
		}
};

int main()
{
	user();
	return 0;
}

void user()
{
	cout << "Enter No. of Hotel : ";
	int n  = getInt();
	
	int number, rating;
	string name, type, location;
	
	for(int i=0; i<n; i++)
	{
		cout << "---Enter " <<  i+1 << " Hotel Data---" << endl << endl
			 << "Hotel Number : ";
		int number = getInt();
		
		cout << "Hotel Name : ";
		string name = getString();
		
		cout << "Hotel Type : ";
		string type = getString();
		
		cout << "Hotel Rating : ";
		int rating = getInt();
		
		cout << "Hotel Location : ";
		string location = getString();
		
		HotelSystem	n(number,rating,name,type,location);	
	}
}

int getInt()
{
	int n;
	cin >> n;
	return n;
}

string getString()
{
	string n;
	cin >> n;
	return n;
}