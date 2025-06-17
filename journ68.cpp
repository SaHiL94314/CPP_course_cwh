#include<iostream>
using namespace std;
template <class T>
class Sahil{
    public:
    T data;
    Sahil(T a){
        data = a;
    }
    void display();
};
template <class T>
void Sahil<T> :: display(){
    cout<<data<<endl;
}

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
template <class X>
void func(X a){
    cout<<"I am templatised func "<<a<<endl;
}

int main(){
    Sahil <float>s(6.9);
    s.display();
    func(4); // Exact match takes highest priority
    func(2.2);
    return 0;
}


