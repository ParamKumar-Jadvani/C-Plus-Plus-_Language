#include<iostream>
using namespace std;
#include<string.h>

int getInt();
void teacherData();

typedef class ClassData
{
	private :
		int t_Id[2][1];
		char t_Name[2][20];
	
	public :
		ClassData()
		{
			cout << "\t---Enter Your Data To Sign Up---" << endl
				 << "Enter Your Id : ";
			this->t_Id[0][1] = getInt();
			
			fflush(stdin);
			cout << "Enter Your Name : ";
			gets(this->t_Name[0][1]);
			
		}
		
		// Setter
		void setData()
		{
			Cout << "Enter Your Id : "
		}
	friend void techerData();
} Data;


int getInt()
{
	int n;
	cin >> n;
	return n;
}

void teacherData()
{
	Data t1;
}

int main()
{
	teacherData();
}