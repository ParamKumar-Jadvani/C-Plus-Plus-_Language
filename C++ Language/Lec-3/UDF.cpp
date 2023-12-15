#include<iostream>
using namespace std;

int getInt();
double getDouble();
string getString();
char getChar();
void manager();
//int get


class HotelData
{
	private :
		int id, staff_quantity, rating, room_quantity, establish_year;
		string  hotel_location;
		static string name, type;
		
	
		static void setHotelStaticData()
		{
			cout << "Enter Your Hotel Name : ";
			name = getString();
			
			HotelData::getHotelData();
		}
		
		static void getHotelData()
		{
			cout << "Hotel Name\t: " << HotelData::name << endl
				 << "Type\t\t: " << HotelData::type << endl;
		}
		
		public : 
			
			
	
	friend void manager();
};

string HotelData:: name = "Hotel";
string HotelData:: type = "Hotel";



void manager()
{
	HotelData::setHotelStaticData();
}


int getInt()
{
	int n;
	cin >> n;
	return n;
}

double getDouble()
{
	double n;
	cin >> n;
	return n;
}

char getChar()
{
	char n;
	cin >> n;
	return n;
}

string getString()
{
	string n;
	cin >> n;
	return n;
}
