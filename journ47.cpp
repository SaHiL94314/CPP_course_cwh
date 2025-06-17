// There is no code in 46
#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
    float a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
    }
    void performOperationsSimple()
    {
        cout << "The value of a+b is " << a + b << endl;
        cout << "The value of a-b is " << a - b << endl;
        cout << "The value of a*b is " << a * b << endl;
        cout << "The value of a/b is " << a / b << endl;
    }
};
class ScientificCalculator
{
    float c, d;

public:
    void getDataScientific()
    {
        cout << "Enter the value of c: ";
        cin >> c;
        cout << "Enter the value of d: ";
        cin >> d;
    }
    void performOperationsScientific()
    {
        cout << "The value of sin(c) is " << sin(c) << endl;
        cout << "The value of cos(d) is " << cos(d) << endl;
        cout << "The value of tan(c) is " << tan(c) << endl;
        cout << "The value of tan(d) is " << tan(d) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};
int main()
{
    HybridCalculator calc;
    calc.getDataSimple();
    calc.performOperationsSimple();
    calc.getDataScientific();
    calc.performOperationsScientific();

    return 0;
}