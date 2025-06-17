// distance between two points
#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }

    friend double distance(Point m, Point n);
};
double distance(Point m, Point n)
{

    double ans = sqrt((pow(m.x - n.x, 2)) + (pow(m.y - n.y, 2)));
    return ans;
}
int main()
{
    Point c1 = Point(1, 1);
    c1.displayPoint();

    Point c2(1, 1);
    c2.displayPoint();

    cout << "The value of distance between two points is " << distance(c1, c2);
    return 0;
}