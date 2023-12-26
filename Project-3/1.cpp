#include<iostream>
using namespace std;

int getInt();


class Shape
{
	protected :
		int height, width;
		
	public :
		// Constructor
		 
		Shape()
		{
			cout << endl << "Enter Height : ";
			this->height = getInt();
			
			cout << "Enter Width : ";
			this->width = getInt();		 	
		} 
};

class Ractangle : public Shape
{
	public :
		// Getter 
		
		void getData()
		{
			cout << endl << "Area of Ractangle is : " << height * width;
		}
};

class Triangle : public Shape
{
	public :
		// Getter
		
		void getData()
		{
			cout << endl << "Area of Traingle is : " << (float)height * (float)width * 0.5;
		}
};

int main()
{
	Ractangle r1;
	r1.getData();
	
	Triangle t1;
	t1.getData();
	
	return 0;
}

int getInt()
{
	int n;
	cin >> n;
	return n;
}
