#include <iostream>
using namespace std;

int main()
{
	char name[20];

	cout << "Enter the String :";
	gets(name);

	for (int i = 0; name[i] != NULL; i++)
	{
		if (name[i] >= 65 && name[i] <= 90)
			name[i] += 32;

		else if (name[i] >= 97 && name[i] <= 122)
			name[i] -= 32;
	}

	cout << "Name in Toggle word is : " << name << endl;
	return 0;
}
