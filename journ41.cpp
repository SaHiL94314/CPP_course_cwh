#include<iostream>
using namespace std;
class Base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int = a;
    }
};
class Base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int = a;
    }
};
class Base3{
    protected:
    int base3int;
    public:
    void set_base3int(int a){
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3{
    public:
    void show(){
        cout<<"The value of Base1 is "<<base1int<<endl;
        cout<<"The value of Base2 is "<<base2int<<endl;
        cout<<"The value of Base3 is "<<base3int<<endl;
        cout<<"The sum these values is "<<base1int + base2int +base3int<<endl;
    }
};
int main(){
    Derived Sahil;
    Sahil.set_base1int(5);
    Sahil.set_base2int(10);
    Sahil.set_base3int(15);
    Sahil.show();
    return 0;
}