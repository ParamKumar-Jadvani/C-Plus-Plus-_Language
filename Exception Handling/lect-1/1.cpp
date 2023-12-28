#include <iostream>
#include <string.h>
using namespace std;

int getInt();
string getString();
double getDouble();

class A
{
private:
    int age;
    double a, b;
    string psw;
    char error1[50] = "YOU ARE NOT ELIGIBLE FOR VOTE !";
    char error[50] = "0[ZERO] CAN NOT DIVIDE BY NUMBER !";
    char error2[50] = "YOUR PASSWORD IS WRONG !";

public:
    A()
    {
        cout << "Enter 1st Number : ";
        this->a = getDouble();

        cout << "Enter 2nd Number : ";
        this->b = getDouble();

        cout << "Enter Your Age : ";
        this->age = getInt();

        cout << "Enter Your Password : ";
        this->psw = getString();
    }

    void getDataNUm()
    {
        if ((a != 0) && (b != 0))
        {
            throw a / b;
        }
        else
        {
            throw error;
        }
    }
    void getDataAge()
    {
        if (age > 18)
        {
            throw age;
        }
        else
        {
            throw error1;
        }
    }

    void getDataPsw()
    {
        if (psw[0] != 0)
        {
            int count = 0;
            for (int i = 0; psw[i] != '\0'; i++)
            {
                if (psw[i] >= 65 && psw[i] <= 90)
                    count++;
            }
            if (count > 0)
            {
                throw psw;
            }
            else
            {
                throw error2;
            }
        }
    }
};

int main()
{
    A n;

    try
    {
        n.getDataNUm();
    }
    catch (double a)
    {
        cout << endl
             << "Your Number Division is : " << a << endl;
    }
    catch (char a[])
    {
        puts(a);
    }
    catch (...)
    {
        cout << endl
             << "THIS IS GENERAL EXCEPTION !" << endl;
    }

    try
    {
        n.getDataAge();
    }
    catch (int a)
    {
        cout << endl
             << a << " YOU HAVE ELIGIBLE FOR VOTE !" << endl;
    }
    catch (char a[])
    {
        puts(a);
    }
    catch (...)
    {
        cout << endl
             << "THIS IS GENERAL EXCEPTION !" << endl;
    }

    try
    {
        n.getDataPsw();
    }
    catch (string a)
    {
        cout << endl
             << "YOUR PASSWORD IS CORRECT !" << endl
             << "Your password is : " << a << endl;
    }
    catch (char a[])
    {
        puts(a);
    }
    catch (...)
    {
        cout << endl
             << "THIS IS GENERAL EXCEPTION !" << endl;
    }

    return 0;
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

double getDouble()
{
    double n;
    cin >> n;
    return n;
}