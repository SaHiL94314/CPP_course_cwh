#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream rout;
    rout.open("myfile");
    rout<<"Sahil Sinha"<<endl;
    rout.close();

    ifstream kin;
    char d;
    kin.open("myfile");
    d = kin.get();
    while(!kin.eof()){
        cout<<d;
        d = kin.get();
    }
    kin.close();

    return 0;
}