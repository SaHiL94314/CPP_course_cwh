#include <iostream>
using namespace std;
// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 35.0;
    }
    Employee() {}
};
// Creating a programmer class derived from Employee Base Class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};
int main()
{
    Employee Sahil(1), Shalini(2);
    cout << Sahil.salary << endl;
    cout << Shalini.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}