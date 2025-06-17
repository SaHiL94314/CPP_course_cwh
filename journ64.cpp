#include<iostream>
using namespace std;
template <class T>
class Vector{
    public:
    T *arr;
    int size;
    Vector(int m){
        size = m;
        arr = new T[size];
    }
    T dotProduct(Vector &v){
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main(){
    Vector<int> obj1(3);
    obj1.arr[0] = 2;
    obj1.arr[1] = 3;
    obj1.arr[2] = 4;
    Vector <int> obj2(3);
    obj2.arr[0] = 4;
    obj2.arr[1] = 3;
    obj2.arr[2] = 2;
    
    //int a = obj1.dotProduct(obj2);
    cout<<obj1.dotProduct(obj2)<<endl;

    Vector <float> obj3(3);
    obj3.arr[0] = 2.2;
    obj3.arr[1] = 3.3;
    obj3.arr[2] = 4.4;
    Vector <float> obj4(3);
    obj4.arr[0] = 4.1;
    obj4.arr[1] = 3.2;
    obj4.arr[2] = 2.3;
    
    float b = obj3.dotProduct(obj4);
    cout<<b<<endl;

    delete [] obj1.arr;
    delete [] obj2.arr;
    delete [] obj3.arr;
    delete [] obj4.arr;
    return 0;
}
