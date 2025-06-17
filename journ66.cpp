#include<iostream>
using namespace std;
template <class T1 = int, class T2 = char, class T3 = float>
class Sahil{
    public:
    T1 a;
    T2 b;
    T3 c;
    Sahil(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};
int main(){
    Sahil <> k(2,'k',2.5);
    k.display();
    cout<<endl;
    Sahil<float,int,char> m(5.4, 3, 'r');
    m.display();

    return 0;
}