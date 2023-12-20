#include<iostream>
#include<string.h>
using namespace std;

int getInt();
void user();
void manager();


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


void manager()
{
	cout << "Enter Number of Customer : ";
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
	
	
		
	cout << "Enter Customer id : ";
	int n1 = getInt();
	
	system("cls");
	
	for(int i=0; i<n; i++)
	{
		if(a[i].cId == n1)
			a[i].getData();
	}
	
	
}


typedef class UserData
{
	private :
		int id, i, lwr=0, space=0, sym=0, digit=0, id1;
		string pass1, pass;
	
	public : 
	
		// Setter
		string setSignUP()
		{
			cout << endl
				 << "\t---PLEASE SIGN UP FIRST---" << endl << endl;
			cout << "1) Enter User Id : ";
			id = getInt();
			
			fflush(stdin);
			cout << "2) Enter Your Password : ";
//			gets(pass);	
			cin >> pass;
			
			return pass;				
		}
	
	
//		void DataCheck(int id ,char pass[])
//		{
//			for(i=0; i<strlen(pass); i++)
//			{
//				if(pass[i] >=97 && pass[i] <= 122)
//					lwr++;
//				else if(pass[i] == 32)
//					space++;
//				else if(pass[i] >=48 && pass[i] <= 57)
//					digit++;
//				else
//					sym++;
//			}
//		
//			if( lwr>0 && space==0 && digit>0  && sym>0 )					
//				loginData(id,pass);
//			else
//			{
//				cout << "YOUR PASSWORD IS WRONG PLEASE SIGN UP AGAIN" << endl << endl;
//				
//				loginData(id,pass);
//			}
//		}
		
		void loginData(string pass)
		{
			h2:
			cout << "\t---PLEASE LOGIN TO YOUR ACCOUNT---" << endl;
			cout << "1) Enter Your Id : ";
			id1 = getInt();
				
			fflush(stdin);
			cout << "2) Enter Your Password : ";
//			gets(pass1);
			cin >> pass1;
			
			
//			DataCheck(id1,pass1);
					
			if(pass == pass1)
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
} UD;


void user()
{
	UD d1;
	
	d1.setSignUP();
	
	
}




int getInt()
{
	int n;
	cin >> n;
	return n;
}


int main()
{
	user();
	manager();
}
