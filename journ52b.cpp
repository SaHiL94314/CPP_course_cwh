#include<iostream>
using namespace std;

int main(){
    int size = 3;
    int *ptr = new int[size];
    int *ptrTemp = ptr;
    ptr[0] = 4;
    ptrTemp[1] = 5;
    cout<<ptr[1]<<endl;
    cout<<ptrTemp[0]<<endl;
    return 0;
}