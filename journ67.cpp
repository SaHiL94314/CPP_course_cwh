#include<iostream>
using namespace std;
// float funcAverage(int a, int b){
//     float avg = (a+b)/2.0 ;
//     return avg;
// }
// float funcAverage2(int a, float b){
//     float average = (a+b)/2;
//     return average;
// }
template <class T1, class T2>
float funcAverage(T1 a, T2 b){
    float average = (a+b)/2.0;
    return average;
}
template<class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    float a = funcAverage(5,2);
    cout<<"The average of these numbers is "<<a<<endl;

    float b = funcAverage(5,2.4);
    cout<<"The average of these numbers is "<<b<<endl;
    
   int x = 5, y = 8;
   swapp(x,y);
   cout<<x<<endl<<y<<endl;
    return 0;
}