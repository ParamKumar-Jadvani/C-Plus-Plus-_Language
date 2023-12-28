#include <iostream>
#include <string.h>
using namespace std;

int getInt();
void user();

class Admin
{
private:
    int total_Revenue;

protected:
    static string company_name;
    int manager_salary, employee_salary, total_staff, can_terminate;

public:
    void setData()
    {
        cout << "\t---Enter Data---" << endl
             << "Company Total Annual Revenue : ";
        this->total_Revenue = getInt();

        cout << "Manager Salary : ";
        this->manager_salary = getInt();

        cout << "Company TOtal Staff : ";
        this->total_staff = getInt();

        cout << "Employee Salary : ";
        this->employee_salary = getInt();

        cout << "Can Terminate : ";
        this->can_terminate = getInt();
    }

    void myAccess()
    {
        cout << endl
             << "\t---Company Data---" << endl
             << "Company Total Revenue : " << this->total_Revenue << endl
             << "Company Total Staff : " << this->total_staff << endl
             << "Manager Salary : " << this->manager_salary << endl
             << "Employee Salary : " << this->employee_salary << endl
             << "Can Terminate : " << this->can_terminate << endl
             << "Company Name : " << Admin::company_name << endl;
    }
};

string Admin::company_name = "Google";

class Manager : protected Admin
{
public:
    void myAccess()
    {
        Admin::setData();
        Admin::myAccess();

        cout << endl
             << "\t---Manager Data---" << endl
             << "Manager Salary : " << this->manager_salary << endl
             << "Total Staff : " << this->total_staff << endl
             << "Employee Salary : " << this->employee_salary << endl
             << "Can Terminate : " << this->can_terminate << endl
             << "Company Name : " << this->Admin::company_name << endl;

        manager_salary = 0;
        total_staff = 0;
        can_terminate = 0;
    }
};

class Employee : private Manager
{
public:
    void myAccess()
    {
        Manager::myAccess();
        cout << endl
             << "\t---Employee Salary---" << endl
             << "Employee Salary : " << employee_salary << endl
             << "Company Name : " << Admin::company_name << endl;
    }
};

int main()
{
    user();
    return 0;
}

void user()
{
    Employee e1;

    e1.myAccess();
}

int getInt()
{
    int n;
    cin >> n;
    return n;
}