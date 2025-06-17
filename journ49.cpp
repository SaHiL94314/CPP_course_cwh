#include <iostream>
using namespace std;
class Test
{
    int a ;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    //   Test(int i, int j) : a(i), b(i+j)
    //    Test(int i, int j) : a(i), b(2*j)
       Test(int i, int j) : a(i), b(a+j)
    //    Test(int i, int j) : b(j), a(i+b) ---> gives error because a is initialized first and we have to assign a first 
    {
        cout << "Constructor executed " << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};
int main()
{
    Test t(3, 7);

    return 0;
}