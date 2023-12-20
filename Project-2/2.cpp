#include<iostream>
#include<string.h>
using namespace std;

int getInt();
void manager();
int searchData();


typedef class SuperMarketBillingSystem
{
	private : 
		int cId, item_n, quantity, price, discount;
		char item_name[15];
	
	public : 
		// Setter 
		void setData()
		{
			cout << endl
				 << "\tCustomer Id : ";
			this->cId = getInt();
				
			cout << "\tTotal Number of Item : ";
			this->item_n = getInt();
				
			fflush(stdin);
			cout << endl
				 << "\t\tItem Name : ";
			gets(this->item_name);
					
			cout << "\t\t\tQuantity : ";
			this->quantity = getInt();
					
			cout << "\t\t\tPrice : ";
			this->price = getInt();
			
			cout << endl;
		}
		
		void setDataHeading()
		{
			cout << endl << "\t---Enter Given Data---" << endl;
		}
		
		void getDataHeading()
		{
			cout << endl << "\t---Customer Data---" << endl;
		}
		
		// Getter 
		void getData()
		{			
			cout << endl
				 << "\tCustomer Id : " << this->cId << endl
				 << "\tTotal Number of Item : " << this->item_n;
					 
			cout << endl
				 << "\t\tItem Name : " << this->item_name
				 << "\t\t\tQuantity : " << this->quantity
				 << "\t\t\tPrice : " << this->price ;
		}
		
	friend void manager();
} SMBS;


typedef class UserData
{
	protected :
		int id, i, lwr=0, space=0, sym=0, digit=0, id1;
		char pass1[30], pass[30];
	
	public : 
	
		// Setter
		void setSignUP()
		{
			cout << endl
				 << "\t---PLEASE SIGN UP FIRST---" << endl << endl;
			cout << "1) Enter User Id : ";
			this->id = getInt();
			
			fflush(stdin);
			cout << "2) Enter Your Password : ";
			gets(this->pass);	
				
		}
	
	
		void DataCheck()
		{
			for(i=0; i<strlen(this->pass); i++)
			{
				if(pass[i] >=97 && pass[i] <= 122)
					lwr++;
				else if(pass[i] == 32)
					space++;
				else if(pass[i] >=48 && pass[i] <= 57)
					digit++;
				else
					sym++;
			}
		
			if( lwr>0 && space==0 && digit>0  && sym>0 )					
				cout << "You Have make Your Account " << endl;
			else
			{
				cout << "YOUR PASSWORD IS WRONG PLEASE SIGN UP AGAIN" << endl << endl;
				
				setSignUP();
			}
		}
		
		void loginData()
		{
			h2:
			cout << endl << endl << "\t---PLEASE LOGIN TO YOUR ACCOUNT---" << endl;
			cout << "1) Enter Your Id : ";
			id1 = getInt();
				
			fflush(stdin);
			cout << "2) Enter Your Password : ";
			gets(pass1);
				
			if(strcmp(pass,pass1) == 0 && (id1 == id) )
			{
				system("cls");
				
				cout << endl 
					 << "\t---YOU HAVE LOGIN YOUR ACCOUNT---" << endl << endl
					 << "\t--PRESS ANY KEY TO GENERATE BILL--" << endl << endl;
				
				getchar();
			}
			else
				goto h2;
		}
	
	friend void manager();
} UD;




int main()
{
	manager();
}


int getInt()
{
	int n;
	cin >> n;
	return n;
}


void manager()
{	
	UD d1;
	
	d1.setSignUP();
	d1.DataCheck();
	
	cout << endl << "Enter Number of customer  : ";
	int n = getInt();
	
	SMBS a[n];
	
	a[0].setDataHeading();
	for(int i=0; i<n; i++)
	{
		a[i].setData();
	}
	
	a[0].getDataHeading();
	for(int i=0; i<n; i++)
	{
		a[i].getData();
	}
	
	d1.loginData();
	
	if( (d1.id == d1.id1) && (strcmp(d1.pass,d1.pass1) == 0))
	{
		int n1 = searchData();	
	
		a[0].getDataHeading();
		for(int i=0; i<n; i++)
		{
			if(a[i].cId == n1)
			{
				a[i].getData();
			}
		}	
	}
	
}

int searchData()
{
	cout << "Enter Customer id : ";
	int n = getInt();
	
	system("cls");
	return n;
	
}

