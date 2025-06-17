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

    double distance(Point m, Point n)
    {

        double ans = sqrt(pow(m.x - n.x, 2) + pow(m.y - n.y, 2));
        return ans;
    }
};
 int main()
{
    Point c1 = Point(0, 1);
    c1.displayPoint();

    Point c2(0, 6);
    c2.displayPoint();

    double res = c1.distance(c1,c2);
    cout << "The value of distance between two points is " <<c1.distance(c1, c2)<<endl;
    cout << "The value of distance between two points is " <<c2.distance(c1, c2)<<endl;
    cout << "The value of distance between two points is " <<res<<endl;
    //cout << "The value of distance between two points is " <<distance(c1,c2)<<endl; // shows error as member function requires object to run

    
    return 0;
}