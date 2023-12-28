#include <iostream>
using namespace std;

int getInt();

class A
{
private:
    int a, b;

public:
    A()
    {
        cout << "Enter A : ";
        this->a = getInt();

        cout << "Enter B : ";
        this->b = getInt();
    }

    void getData()
    {
        if (a > b)
        {
            throw a;
        }
        else if (a == b)
        {
            throw 1.2;
        }
        else
        {
            throw b;
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
    catch (int a)
    {
        cout << a << " is Big " << endl;
    }
    catch (int a)
    {
        cout << a << " is Big " << endl;
    }
    catch (...)
    {
        cout << "THis is general exception ! " << endl;
    }
}

int getInt()
{
    int n;
    cin >> n;
    return n;
}