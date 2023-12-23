#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

string getString();
int getInt();
void login();
void registerForm();
class Student;

class Teacher
{
private:
	int subId, stu1, sub1;
	string name, pass;

	// Setter (SET DATA_(TEACHER) )
	void setData_Teacher()
	{
		cout << "Enter Your Subject Id : ";
		subId = getInt();

		cout << "Enter Your Name : ";
		name = getString();
	}

public:
	class Student
	{
	private:
		char name[sub1][10], sub[stu1][10];

	public:
		// Setter (SET DATA_(STUDENT CLASS) )
		void setData_Student();
	};

	friend void registerForm();
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
	registerForm();
}

void registerForm()
{
	Teacher t1, t2;

	t1.setData_Teacher();

	cout << endl
		 << "Congratulations !! You have Register Your Account" << endl
		 << "Enter any key to Login to Our Programme !!" << endl;

	getch();

	system("cls");

	t2.setData_Teacher();

	if ((t1.subId == t2.subId) && (t1.name == t2.name))
	{
		cout << endl
			 << "Welcome\n\t\t---STUDENT MANAGMENT SYSTEM---" << endl
			 << endl
			 << endl;
	}
}

int main()
{
	login();
	return 0;
}
