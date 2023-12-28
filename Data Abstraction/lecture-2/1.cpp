#include <iostream>
#define PI 3.14;
using namespace std;

double getDouble();

class MathematicalTask
{
protected:
    double Base, Height, radius;

public:
    virtual void calculate() = 0;
};

class Circle : public MathematicalTask
{
private:
    double r;

public:
    Circle()
    {
        cout << endl
             << "Enter Circle Radius : ";
        radius = getDouble();

        void calculate();
    }

    void calculate()
    {
        cout << endl
             << endl
             << "Radius of Circle is : " << (radius * radius) * PI;
    }
};

class Triangle : public MathematicalTask
{
private:
    double h, b;

public:
    Triangle()
    {
        cout << endl
             << endl
             << "Enter Triangle Height : ";
        Height = getDouble();

        cout << "Enter Triangle Base  : ";
        Base = getDouble();

        void calculate();
    }

    void calculate()
    {
        cout << endl
             << endl
             << "Area of Triangle is : " << Base * Height * 0.5;
    }
};

class Ractangle : public MathematicalTask
{
private:
    double h, b;

public:
    Ractangle()
    {
        cout << endl
             << endl
             << "Enter Ractangle Height : ";
        Height = getDouble();

        cout << "Enter Ractangle Base Length : ";
        Base = getDouble();

        void calculate();
    }

    void calculate()
    {
        cout << endl
             << endl
             << "Area of Ractangle is : " << Height * Base;
    }
};

int main()
{
    Circle c;
    c.calculate();

    Triangle t;
    t.calculate();

    Ractangle r;
    r.calculate();

    return 0;
}

double getDouble()
{
    double n;
    cin >> n;
    return n;
}