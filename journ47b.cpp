#include <iostream>
#include <cmath>
using namespace std;
class Calculator{
    public:
    float a, b;
     void getData()
    {
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
    }
};
class SimpleCalculator : virtual public Calculator
{
public:
   
    void performOperationsSimple()
    {
        cout << "The value of a+b is " << a + b << endl;
        cout << "The value of a-b is " << a - b << endl;
        cout << "The value of a*b is " << a * b << endl;
        cout << "The value of a/b is " << a / b << endl;
    }
};
class ScientificCalculator : virtual public Calculator
{
public:
   
    void performOperationsScientific()
    {
        cout << "The value of sin(a) is " << sin(a) << endl;
        cout << "The value of cos(a) is " << cos(a) << endl;
        cout << "The value of tan(a) is " << tan(a) << endl;
        cout << "The value of tan(a) is " << tan(a) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};
int main(){
    HybridCalculator calc;
    calc.getData();
    calc.performOperationsScientific();
    calc.performOperationsSimple();

    return 0;
}