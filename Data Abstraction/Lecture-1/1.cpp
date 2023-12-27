#include<iostream>
using namespace std;

int getInt();
string getSting();
void user();

class Admin
{
	protected : 
		string - can_terminate;
		int manager_salary, employee_salary, total_staff, total_annual_revenue;
		static string company_name;
		
		public :
			void setData()
			{
				cout << "\t---Enter Data---" << endl
					 << "Manager Salary : ";
				this->manager_salary = getInt();
				
				cout << "Employee Salary : ";
				this->employee_salary = getInt();
				
				cout << "Total Staff : ";
				this->total_staff = getInt();
				
				cout << "Total Annual Revenue : ";
				this->total_annual_revenue = getInt();
				
				cout << "When Terminate or Not : ";
				this->can_terminate = getString();
			}		
};