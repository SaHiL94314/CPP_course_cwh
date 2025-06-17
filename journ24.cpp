#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void)
    {
        //  cout<<id;   // throws an error
        cout << "The value of count is " << count << endl;
    }
};
//count is the static data member of class Employee
int Employee::count; // Default value is 0
int main()
{
    Employee sahil, rohan, harry;
    //sahil.id = 1;   // cannot do this as id and count are private
    //sahil.count = 1;
    sahil.setData();
    sahil.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    harry.setData();
    harry.getData();
    Employee::getCount();
    return 0;
}