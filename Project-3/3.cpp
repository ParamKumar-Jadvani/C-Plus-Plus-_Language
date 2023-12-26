#include<iostream>
#include<string.h>
using namespace std;

int getInt();
string getString();
void ceo();

class A
{
	protected :
		int id, salary, experience, contact;
		string name, role, email, comp_name, address;

	public :
		
		// Setter
		void setDataA()
		{
			cout << "\tId\t\t: ";
			this->id = getInt();
			
			cout << "\tName\t\t: ";
			this->name = getString();
			
			cout << "\tRole\t\t: ";
			this->role = getString();
		}	
};


class B : public A
{
	public :
		void setDataB()
		{
			cout << "\tSalary\t\t: ";
			salary = getInt();
			
			cout << "\tExperience\t: ";
			experience = getInt();
		}
};

class C : public B
{
	public :
		
		// Setter
		void setDataC()
		{
			cout << "\tAddress\t\t: ";
			address = getString();
			
			cout << "\tCompany Name\t: ";
			comp_name = getString();
		}
		
		// Getter
		void getDataC()
		{
			cout << endl 
				 << "\t\t---Employee Data---" << endl
				 << "\tName\t: " << name
				 << "\tRole\t: " << role
				 << "\tSalary\t: " << salary << endl;
		}
};

class D : public C
{
	public :
		void setDataD()
		{
			cout << "\tEmail\t\t: ";
			email = getString();
			
			cout << "\tContact\t: ";
			contact = getInt();
		}
		
		void getDataD()
		{
			cout << endl << endl
				 << "\tId\t\t: " << id << endl
				 << "\tName\t\t: " << name << endl
				 << "\tRole\t\t: " << role << endl
				 << "\tSalary\t\t: " << salary << endl
				 << "\tExperience\t: " << experience << endl
				 << "\tEmail\t\t: " << email << endl
				 << "\tContact\t\t: " << contact << endl 
				 << "\tAddress\t\t: " << address << endl
				 << "\tCompany Name\t:" << comp_name << endl << endl;
		}
};


int main()
{
	ceo();
}


void ceo()
{
	cout << "Enter Number of Employee : ";
	int n = getInt();
	
	D e[n];
	
	
	cout << "\t\t---Enter Employee Data---" << endl << endl;
	for(int i=0; i<n; i++)
	{
		e[i].setDataA();
		e[i].setDataB();
		e[i].setDataC();
		e[i].setDataD();
	}
	
	
	cout << "\t\t---Emloyee Data---" << endl;
	for(int i=0; i<n; i++)
	{
		e[i].getDataD();
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
