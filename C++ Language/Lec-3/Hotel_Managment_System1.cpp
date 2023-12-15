#include<iostream>
using namespace std;



string getString();
int getInt();
double getDouble();
char getChar();
void manager();
void runData();




class HotelData
{
	private :
		int id, staff_quantity, room_quantity, establish_year;
		string  location;
		static string name, type;
		static double rating;
		
	
		static void setHotelStaticData()
		{
			cout << "Enter Your Hotel Name : ";
			name = getString();
			here :
			cout << endl 
				 << " Enter Your Hotal Avrage StarRating : ";
			rating = getInt();
			
			if(rating > 0 && rating < 8);
			else
			{
				cout << endl
					 << "  Your Rating is Not Out of our Programm, please input 0 to 7 rating if you have !! " 
					 << endl  << endl;
				goto here;
			}
			
			HotelData::getHotelStaticData();
		}
		
	public : 
	
		static void getHotelStaticData()
		{
			cout << "Hotel Name\t: " << HotelData::name << endl
				 << "Type\t\t: " << HotelData::type << endl << endl << endl;
		}
			
		// Set Data Of Hotel
		void setHotelData()
		{
			cout << endl << "  Hotel Id : ";
			this->id = getInt();

			cout << "  Room Quantity : ";
			this->room_quantity = getInt();
	
			cout << "  Staff Quantity : ";
			this->staff_quantity = getInt();
	
			cout << "  Establish Year : ";
			this->establish_year = getInt();
	
			cout << "  Loctaion of Hotel :";
			this->location = getString();
	
			cout << endl;
		}
		
		//Get Data Of Hotel
		void getHotelData()
		{
			cout << endl
			 	 << this->id << "\t\t" 
				 << this->room_quantity << "\t\t" 
				 << this->staff_quantity << "\t\t" 
				 << this->establish_year << "\t\t" 
				 << this->rating << "\t\t" 
				 << this->location 
				 << endl << endl ;
		}
		
		
		void getHading()
		{
			cout << "Hotel Id\tRoom Quantity\tStaff Quanitity\tEstablish Year\tRating of Hotel\tLocation of Hotel" << endl
			 	 << "--------\t-------------\t--------------\t--------------\t---------------\t----------------" << endl << endl;
		}
	
	
	friend void manager();
};




string HotelData:: name = "Hotel";
string HotelData:: type = "Hotel";
double HotelData:: rating = 0;




void manager()
{
	HotelData::setHotelStaticData();
	runData();
}


void runData()
{
	int n,i;
	
	cout << endl << endl 
		 << "Enter Your Hotel Branches : ";

	n = getInt();
	HotelData h[n];
	
	for(i=0; i<n; i++)
	{
		h[i].setHotelData();
	}
	
	system("cls");
	HotelData::getHotelStaticData();
	
	h[0].getHading();
	
	for(i=0; i<n; i++)
	{
		h[i].getHotelData();
	}
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
