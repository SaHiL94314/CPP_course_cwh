#include<iostream>
#include<fstream>
using namespace std;

int main() {
    //Writing
    string st = "Sahil Sinha" ;
    // Opening files using constructor and writing it
    ofstream out("samplefile.txt");
    out<<st;
    out.close();
    // Reading
    string st2;
    // Opening files using constructor and reading it
    ifstream in("samplefile.txt");
    getline(in,st2);
    cout<<st2;
    in.close();



    return 0;
}