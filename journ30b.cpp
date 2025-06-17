#include<iostream>
using namespace std;
class Point{
    int x,y;
    public:
    Point(int a, int b){
        x=a;
        y=b;
    }
    void displayPoint(){
        cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
    }
};
int main(){
Point d(4,7);
d.displayPoint();
Point e(5,8);
e.displayPoint();
    return 0;
}