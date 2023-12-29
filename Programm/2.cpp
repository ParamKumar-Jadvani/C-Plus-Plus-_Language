#include<iostream>
#include<conio.h>
using namespace std;

int getInt();
string getString();
void user();
void searchData();

class BankSystem
{
	private : 
		int Number, Balance;
		string Name, Type , Branch;
		
	public : 
		//Setter
		void setData()
		{
			cout << "\t---Enter Account Data---" << endl
				 << "Account Number : ";
			this->Number = getInt();
			
			cout << "Account Name : ";
			this->Name = getString();
			
			cout << "Account Type : ";
			this->Type = getString();
			
			cout << "Account Branch : ";
			this->Branch = getString();
			
			cout << "Account Balance : ";
			this->Balance = getInt();
		}
		
		//Getter
		void getData()
		{
			cout << this->Number << "\t" << this->Name << "\t" << this->Type << "\t" << this->Branch <<  "\t" << this->Balance << endl
				 << endl;
		}
		
		void getHeding()
		{
			cout << "\t---Account Data---" << endl
				 << "Number\tName\tType\tBrach\tBalance" << endl 
				 << "------\t----\t----\t-----\t-------" << endl << endl;
		}
	friend void searchData(BankSystem a, int n);
};

int main()
{
	user();
	return 0;
}

void user()
{
	cout << "Enter No. of Account : ";
	int n = getInt();
	
	BankSystem c[n];
	
	for(int i=0; i<n; i++)
		c[i].setData();
	
	c[0].getHeding();
	
	for(int i=0; i<n; i++)
	{
		c[i].getData();
	}
	
	getch();
	system("cls");
	
	cout << "Enter Acount Number : ";
	int num = getInt();
	
	for(int i=0; i<n; i++)
	{
		searchData(c[i],num);
	}
}

void searchData(BankSystem a, int n)
{
	if(a.Number == n)
		a.getData();
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