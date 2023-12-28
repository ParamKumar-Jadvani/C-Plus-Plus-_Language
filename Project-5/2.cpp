#include <iostream>
using namespace std;

int getInt();

class A
{
protected:
    int age;
    char vote[50] = "You are Eligible for Vote ";

public:
    A()
    {
        cout << "Enter Your Age : ";
        this->age = getInt();
    }

    void getData()
    {
        if (this->age > 18)
        {
            throw vote;
        }
        else
        {
            throw false;
        }
    }
};

int main()
{
    A n;

    try
    {
        n.getData();
    }
    catch (char e[])
    {
        cout << e << endl;
    }
    catch (bool e)
    {
        cout << "You are not Eligible for Vote ";
    }
}

int getInt()
{
    int n;
    cin >> n;
    return n;
}