#include<iostream>
#include<string.h>
using namespace std;


int getInt();
string getString();
int serchData();

typedef class TrainReservationSystem
{
	private :
		int number,n;
		string trainTime;
		char trainName[20], dest[20];
		
	public :
		// Setter 
		void setData()
		{
			cout << "\t---Enter the train data---" << endl << endl;
			cout << "Train number : ";
			this->number = getInt();
			
			fflush(stdin);
			cout << "Train name : ";
			gets(this->trainName);
			
			cout << "Train time in word : ";
			this->trainTime = getString();
			
			fflush(stdin);
			cout << "Train destination : ";
			gets(this->dest);
		}
		
		// Getter
		void getData()
		{
			cout << endl
				 << this->number << "\t\t" << this->trainName << "\t\t" << this->trainTime << "\t\t" << this->dest << endl;
		}
		
		// Get Header
		void getHeader()
		{
			cout << endl
				 <<"\t---Train Data---" << endl << endl;
			
			cout << "Train Number\tTrain Name\tTarin Time\tTrain Destination" << endl << endl;
		}
	
	friend void trainData();	
} TRS;


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


int searchData()
{
	int n;
	cout << endl << endl << "Enter Number to find train data : ";
	cin >> n;
	
	return n;
}


void trainData()
{
	int i,n;
	TRS d1;
	cout << endl << endl 
		 << "Enter Number of Records you want to store : ";
	d1.n = getInt();
	
	TRS td[d1.n];
	
	for(i=0; i<d1.n; i++)
	{
		td[i].setData();
	}
	
	system("cls");
	
	d1.getHeader();
	
	for(i=0; i<d1.n; i++)
	{
		cout << i+1 << ") ";
		td[i].getData();
	}
	
	n = searchData();
	
	for(i=n-1; i<n; i++)
	{	
		d1.getHeader();
		td[i].getData();
	}
}


int main()
{
	trainData();
	
	return 0;
}