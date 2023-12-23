#include <iostream>
#include <string.h>
using namespace std;

class Message
{
private:
	string str = "Hello surat", str3;

public:
	Message(string str1)
	{
		str = str1;
	}

	void print()
	{
		cout << endl
			 << this->str << endl;
	}

	void print(string str1)
	{
		str3 = str + str1;
		//			cout << endl << str << str1 << endl;
		cout << endl
			 << str3;
	}
};

int main()
{
	char n[20];

	cout << "Enter String : ";
	gets(n);

	Message o1(n);

	o1.print();

	cout << endl
		 << "Enter Another String : ";
	gets(n);

	o1.print(n);
}
