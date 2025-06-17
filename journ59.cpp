#include<fstream>
#include<iostream>
using namespace std;

int main(){
// Writing
ofstream fout;
fout.open("myfile");
fout<<"hello sahil";
fout.close();

// Reading
 ifstream fin;
char ch;
fin.open("myfile");
fin>>ch;
cout<<ch;
fin>>ch;
cout<<ch;
fin>>ch;
cout<<ch;
fin>>ch;
cout<<ch;
fin>>ch;
cout<<ch;
fin>>ch;
cout<<ch;
fin>>ch;
cout<<ch;
fin>>ch;
cout<<ch;
fin>>ch;
cout<<ch;
fin>>ch;
cout<<ch<<endl;
fin.close();
    return 0;
}