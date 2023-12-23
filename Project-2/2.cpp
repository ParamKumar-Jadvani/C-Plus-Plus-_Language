#include <iostream>
#include<conio.h>
#include <string.h>
using namespace std;

int getInt();
void manager();
int searchData();

typedef class Super
{
private:
	int itemNum, quantity, price, total_Price;
	float bill = 0;
	char itemName[10];

public:
	// Setter
	void setData()
	{
		cout << endl
			 << "Enter Item Number : ";
		this->itemNum = getInt();

		fflush(stdin);
		cout << "Enter Item Name : ";
		gets(this->itemName);

		cout << "Enter Item quantity : ";
		this->quantity = getInt();

		cout << "Enter Item Price : ";
		this->price = getInt();

		this->total_Price = (this->price * this->quantity);
		bill = ((float)total_Price)*0.20;
		bill = total_Price - bill;
	}

	// Getter
	void getData()
	{
		cout << endl
			 << this->itemNum << "\t\t" << this->itemName << "\t\t" << this->quantity << "\t\t" << this->price << "\t" << this->total_Price
			 << endl;
	}

	void getHeading()
	{
		cout << endl
			 << "Item Number\tItem Name\tQuantity\tPrice\tTotal_Price" << endl
			 << "----------\t---------\t--------\t-----\t----------" << endl;
	}
	
	void getEnding()
	{
		cout << endl 
			 << "----------------------------------------------------------------------" << endl;
	}
	
	void getBill()
	{
		cout << "Your Total Bill is : " << this->bill << endl;
	}
	
	friend void manager();
	friend void searchData(Super t, int num);
};

typedef class UserData
{
	private:
		int id, id1, i, lwr = 0, space = 0, sym = 0, digit = 0;
		char pass[20], pass1[20];
	
	public:
		// Sign Up Data
		void signUp()
		{
		h1:
			cout << endl
				 << "Sign Up Your Account" << endl
				 << "Your Id : ";
			this->id = getInt();
	
			fflush(stdin);
			cout << "Your PassWord : ";
			gets(this->pass);
		}
	
		// Check Passowrd
		void checkPassword()
		{
		h1:
			for (i = 0; i < strlen(this->pass); i++)
			{
				if (this->pass[i] >= 97 && this->pass[i] <= 122)
					this->lwr++;
				else if (this->pass[i] == 32)
					this->space++;
				else if (this->pass[i] >= 48 && this->pass[i] <= 57)
					this->digit++;
				else
					this->sym++;
			}
	
			if (this->lwr > 0 && this->space == 0 && this->digit > 0 && this->sym > 0 && strlen(this->pass) > 8)
			{
				cout << endl
					 << "YOUR HAVE SIGN UP YOUR ACCOUNT" << endl;
				goto h2;
			}
			else
			{
				cout << "YOUR PASSWORD IS WRONG PLEASE SIGN UP AGAIN" << endl
					 << endl;
				goto h3;
				//				signUp();
			}
	
		h3:
			fflush(stdin);
			cout << "Your PassWord : ";
			gets(this->pass);
			goto h1;
	
		h2:
			cout << endl;
		}
	
		// Login Account
		void loginAccount()
		{
			cout << endl
				 << "Login Your Account" << endl
				 << "Your Id : ";
			this->id1 = getInt();
	
			fflush(stdin);
			cout << "Yout Password : ";
			gets(this->pass1);
		}
	friend void manager();
} ud;

int main()
{
	manager();
	return 0;
}

int getInt()
{
	int n;
	cin >> n;
	return n;
}

void manager()
{
	ud a1;
	cout << "Enter Total Number Of item : ";
	int n = getInt();
	
	Super s[n];

	a1.signUp();
	a1.checkPassword();

	for(int i=0; i<n; i++)
	{
		s[i].setData();
	}
	
	s[0].getHeading();
	
	
	for(int i=0; i<n; i++)
	{
		s[i].getData();	
	}
	
	getch();
	system("cls");

	a1.loginAccount();
	
	cout << "Enter item Number : ";
	int num = getInt();
	
	s[0].getHeading();
	for(int i=0; i<n; i++)
	{
		searchData(s[i],num);
	}
	
	
}

void searchData(Super t, int n)
{
	if(t.itemNum == n)
	{
		t.getData();
		t.getEnding();
		t.getBill();
	}
}
