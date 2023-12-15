#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

string getString();

int getInt();

void login();

void registerForm();

class Student
{
	private :
	int subId;
	string name;
	
		// Setter SET DATA
		void setData()
		{
			cout << "Enter Your Subject Id : ";
			subId = getInt();
			
			cout << "Enter Your Name : ";
			name = getString();
		}
		
				
//		// Getter GET DATA
//		void getData()
//		{
//			cout >> " Your
//		}
	
	friend void registerForm();
	friend void login();
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

void login()
{
	teacherData();
	
}

void registerForm()
{
	Student s1,s2;
	
	s1.setData();
	
	cout << endl 
		 << "Congratulations !! You have Register Your Account" << endl
		 <<  "Enter any key to Login to Our Programme !!"<< endl;
		 
	getch();
	
	system("cls");
	
	s2.setData();
	
	if( (s1.subId == s2.subId) && (s1.name == s2.name) )
	{
		cout << endl
		 	 << "Welcome\n\t\t---STUDENT MANAGMENT SYSTEM---" << endl << endl << endl;	
	}
}
int main()
{
	login();
	return 0;	
}
