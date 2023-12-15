#include<iostream>
#include<string.h>
using namespace std;

int getInt();
string getString();

class Studentrecord
{
	private :
		int stu_id, stu_age;
		string stu_name, stu_course, stu_city, stu_email, stu_college;
		
	public :
		
		// Set Data (Setter)
		void setData()
		{
			cout << endl
				 << "Enter Student Data" << endl;
			cout << "\tId\t\t:";
			this->stu_id = getInt();
			
			cout << "\tName\t\t:";
			this->stu_name = getString();
			
			cout << "\tAge\t\t:";
			this->stu_age = getInt();
			
			cout << "\tEmail Address\t:";
			this->stu_email = getString();
			
			cout << "\tCourse Name\t:";
			this->stu_course = getString();
			
			cout << "\tCollege Name\t:";
			this->stu_college = getString();
			
			cout << "\tLiving City\t:";
			this->stu_city = getString();
			
			cout << endl;
			
			getData();
		}
		
		// Get Data (Getter)
		void getData()
		{
			cout << endl
				 << "Student Data " << endl
				 << "\tId\t\t: " << this->stu_id  << endl
				 << "\tName\t\t: " << this->stu_name << endl
				 << "\tAge\t\t: " << this->stu_age  << endl
				 << "\tEmail Address\t: " << this->stu_email << endl
				 << "\tCourse Name\t: " << this->stu_course << endl
				 << "\tcollege Name\t: " << this->stu_college << endl
				 << "\tLiving City\t: " << this->stu_city << endl;
		}
};


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

int main()
{
	Studentrecord s1,s2,s3,s4,s5;
	
	s1.setData();
	s2.setData();
	s3.setData();
	s4.setData();
	s5.setData();
	
	
	return 0;	
}
