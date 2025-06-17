#include<iostream>
using namespace std;
template <class T1, class T2>
class myClass{
    public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b){
        data1 = a;
        data2 = b;
    }
    void display(){
        cout<<"The value of data1 is "<<data1<<endl;
        cout<<"The value of data2 is "<<data2<<endl;
    }
};
int main(){
    myClass<int,int> h(3,5);
    h.display();
    cout<<endl;
    myClass<float,char> g(4.2,'c');
    g.display();

    return 0;
}