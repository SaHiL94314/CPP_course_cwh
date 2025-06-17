#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void setData(int a){
        this->a = a;
    }
    void getData(){
        cout<<"The value of a is "<<a<<endl;
    }
};
class B{
    int b;
    public:
    B * setData(int b){
        this->b = b;
        return this;
    }
    void getData(){
        cout<<"The value of b is "<<b<<endl;
    }
};
class C{
    int c;
    public:
    C & setData(int c){
        this->c = c  ;
        return *this;
    }
    void getData(){
        cout<<"The value of c is "<<c<<endl;
    }
};
int main(){
    A obj1;
    obj1.setData(4);
    obj1.getData();

    B obj2;
    cout<<obj2.setData(5)<<endl;
    obj2.getData();

    C obj3;
    obj3.setData(6).getData();
    
   

    return 0;
}