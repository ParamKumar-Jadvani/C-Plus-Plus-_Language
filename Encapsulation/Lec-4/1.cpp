#include<iostream>
#include<string.h>
using namespace std;

int getInt();
string getString();


class DiamondCompaniesData
{
	private :
		int  id[10][1], staff_quantity[10][1], revenue[10][1], import_raw_diamonds[10][1], export_diamonds[10][1];
		char name[10][30], ceo[10][20];
		
	public : 
		DiamondCompaniesData(int num)
		{
			int i;
			cout << endl
				 << "\t---Enter Companies Data---" << endl << endl;
			for(i=0; i<num; i++)
			{
				cout << "Company ID : ";
				this->id[i][1] = getInt();
				
				fflush(stdin);
				cout << endl
					 << "Company Name : ";
				gets(this->name[i]);
				
				cout << endl
					 << "Comapany Total Staff : ";
				this->staff_quantity[i][1] = getInt();
				
				cout << endl
					 << "Company Revenue : ";
				this->revenue[i][1] = getInt();
				
				cout << endl
					 << "Comapny Per Year Import Raw Diamond : ";
				this->import_raw_diamonds[i][1] = getInt();
				
				cout << endl
					 << "Comapany Per Year Export Raw Diamond : ";
				this->export_diamonds[i][1] = getInt();
				
				fflush(stdin);
				cout << endl
					 << "Company CEO : ";
				gets(this->ceo[i]);
				
				cout << endl
					 << endl
					 << "---------------------------------------------------------"
					 << endl
					 << endl;
			}
			
			system("cls");
			cout << endl
				 << "\t---Companies Data---" << endl << endl;
				 
			for(i=0;  i<num; i++)
			{
				cout << "Company ID \t\t\t\t:\t" << this->id[i][1]
					 << endl << endl
					 
					 << "Company Name \t\t\t\t:\t" << this->name[i]
					 << endl << endl
					 
					 << "Comapany Total Staff \t\t\t:\t" << this->staff_quantity[i][1]
					 << endl << endl
					 
					 << "Company Revenue \t\t\t:\t" << this->revenue[i][1]
					 << endl << endl
					 
					 << "Comapny Per Year Import Raw Diamond \t:\t" <<  this->import_raw_diamonds[i][1]
					 << endl << endl
					 
					 << "Comapany Per Year Export Raw Diamond \t:\t" << this->export_diamonds[i][1]
					 << endl << endl
					 
					 << "Company CEO \t\t\t\t:\t" << this->ceo[i]
					 << endl 
					 << "----------------------------------------------------" << endl << endl;
			}
		}
};



int getInt()
{
	int n;
	cin >> n;
	return n;
}




int main()
{
	int n;
	cout << "Enter N Number of Companies :";
	n = getInt();
	
	
	DiamondCompaniesData c(n);

	
	
}
