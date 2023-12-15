#include<iostream>
#include<string.h>
using namespace std;


class Employee
{
	public :
		
		int id, age, salary, experience;
		string emp_name	,  role, city, company_name;		
};

class CarRecordSystem
{
	public :
		int car_id, car_release_year;
		string car_name,car_company_name, car_color, car_model;
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
	int i;
	Employee e1,e2,e3,e4,e5;
	CarRecordSystem c1,c2,c3,c4,c5;
	
	cout << "1) Enter Your Name\t:";
	e1.emp_name = getString();
	
	cout<< "   Enter Your Id\t:";
	e1.id = getInt();
	
	cout << "   Enter Your Age\t:";
	e1.age = getInt();
	
	cout << "   Enter Your Role\t:";
	e1.role = getString();
	
	cout << "   Enter Your Salary\t:";
	e1.salary = getInt();
	
	cout << "   Enter Your Experience\t:";
	e1.experience = getInt();
	
	cout << "   Enter Your Company Name\t:";
	e1.company_name = getString();
	
	cout << "Enter Your Car Name\t:";
	c1.car_name = getString();
	
	
	cout << "2) Enter Your Name\t:";
	e1.emp_name = getString();
	
	cout<< "   Enter Your Id\t:";
	e1.id = getInt();
	
	cout << "   Enter Your Age\t:";
	e1.age = getInt();
	
	cout << "   Enter Your Role\t:";
	e1.role = getString();
	
	cout << "   Enter Your Salary\t:";
	e1.salary = getInt();
	
	cout << "   Enter Your Experience\t:";
	e1.experience = getInt();
	
	cout << "   Enter Your Company Name :\t";
	e1.company_name = getString();
	
	
	cout << "3) Enter Your Name\t:";
	e1.emp_name = getString();
	
	cout<< "   Enter Your Id\t:";
	e1.id = getInt();
	
	cout << "   Enter Your Age\t:";
	e1.age = getInt();
	
	cout << "   Enter Your Role\t:";
	e1.role = getString();
	
	cout << "   Enter Your Salary\t:";
	e1.salary = getInt();
	
	cout << "   Enter Your Experience\t:";
	e1.experience = getInt();
	
	cout << "   Enter Your Company Name :\t";
	e1.company_name = getString();
	
	
	cout << "4) Enter Your Name\t:";
	e1.emp_name = getString();
	
	cout<< "   Enter Your Id\t:";
	e1.id = getInt();
	
	cout << "   Enter Your Age\t:";
	e1.age = getInt();
	
	cout << "   Enter Your Role\t:";
	e1.role = getString();
	
	cout << "   Enter Your Salary\t:";
	e1.salary = getInt();
	
	cout << "   Enter Your Experience\t:";
	e1.experience = getInt();
	
	cout << "   Enter Your Company Name :\t";
	e1.company_name = getString();
	
	
	cout << "5) Enter Your Name\t:";
	e1.emp_name = getString();
	
	cout<< "   Enter Your Id\t:";
	e1.id = getInt();
	
	cout << "   Enter Your Age\t:";
	e1.age = getInt();
	
	cout << "   Enter Your Role\t:";
	e1.role = getString();
	
	cout << "   Enter Your Salary\t:";
	e1.salary = getInt();
	
	cout << "   Enter Your Experience\t:";
	e1.experience = getInt();
	
	cout << "   Enter Your Company Name :\t";
	e1.company_name = getString();
	
	cout << "1) Your Name is\t: " << e1.emp_name << endl
		 << "   Your Id is \t: " << e1.id << endl
		 << "   Your Age is\t: " << e1.age << endl
		 << "   Your Role is\t: " << e1.role << endl
		 << "   Your Salary is\t: " << e1.salary << endl
		 << "   Your Experience is\t: " << e1.experience << endl
		 << "   Your Company Name is\t: " <<e1.company_name <<endl;
		 
		 
	cout << "2) Your Name is\t: " << e1.emp_name << endl
		 << "   Your Id is \t: " << e1.id << endl
		 << "   Your Age is\t: " << e1.age << endl
		 << "   Your Role is\t: " << e1.role << endl
		 << "   Your Salary is\t: " << e1.salary << endl
		 << "   Your Experience is\t: " << e1.experience << endl
		 << "   Your Company Name is\t: " <<e1.company_name <<endl;
		 
		 
	cout << "3) Your Name is\t: " << e1.emp_name << endl
		 << "   Your Id is \t: " << e1.id << endl
		 << "   Your Age is\t: " << e1.age << endl
		 << "   Your Role is\t: " << e1.role << endl
		 << "   Your Salary is\t: " << e1.salary << endl
		 << "   Your Experience is\t: " << e1.experience << endl
		 << "   Your Company Name is\t: " <<e1.company_name <<endl;
		 
		 
	cout << "4) Your Name is\t: " << e1.emp_name << endl
		 << "   Your Id is \t: " << e1.id << endl
		 << "   Your Age is\t: " << e1.age << endl
		 << "   Your Role is\t: " << e1.role << endl
		 << "   Your Salary is\t: " << e1.salary << endl
		 << "   Your Experience is\t: " << e1.experience << endl
		 << "   Your Company Name is\t: " <<e1.company_name <<endl;
		 
		 
	cout << "5) Your Name is\t: " << e1.emp_name << endl
		 << "   Your Id is \t: " << e1.id << endl
		 << "   Your Age is\t: " << e1.age << endl
		 << "   Your Role is\t: " << e1.role << endl
		 << "   Your Salary is\t: " << e1.salary << endl
		 << "   Your Experience is\t: " << e1.experience << endl
		 << "   Your Company Name is\t: " <<e1.company_name <<endl;
		 
	return 0;
}
