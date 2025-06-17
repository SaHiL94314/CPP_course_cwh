#include <iostream>
using namespace std;
class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    Complex *ptr = new Complex;
    (*ptr).setData(1, 54);
    (*ptr).getData();

    // Arrow operator
    Complex *p = new Complex;
    p->setData(2, 27);
    p->getData();

    // Array of Objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(5, 55);
    ptr1->getData();
    (ptr1 + 1)->setData(7, 21);
    (ptr1 + 1)->getData();
    (ptr1 + 2)->setData(3, 9);
    (ptr1 + 2)->getData();
    (*(ptr + 3)).setData(3, 8); //Dot operator precedence is higher than dereference operator "*"
    (*(ptr + 3)).getData();

    return 0;
}