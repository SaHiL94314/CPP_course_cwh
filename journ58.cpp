#include<iostream>
using namespace std;
class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s, float r){
        title = s;
        rating = r;
    }
    virtual void display() = 0; // do nothing function
};
class CWHVideo : public CWH{
    int videoLength;
    public:
    CWHVideo(string s,float r, int vl) : CWH(s,r) {
        videoLength = vl;
    }
    void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
        cout<<"Length of this video is "<<videoLength<<" minutes"<<endl;
    }
};
class CWHText : public CWH{
    int words;
    public:
    CWHText(string s,float r, int wc) : CWH(s,r) {
        words = wc;
    }
    void display(){
        cout<<"This is an amazing text tutorial with title "<<title<<endl;
        cout<<"Rating of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
        cout<<"No. of words in this text tutorial is "<<words<<" minutes"<<endl;
    }
};
int main(){
string t;
    float r;
    int w;
    int l;
    // for CWH video
    t = "django tutorial";
    r = 4.9;
    l = 8;
    CWHVideo dj(t,r,l);
    

    // for CWH text
    t = "django text tutorial";
    r = 4.95;
    w = 544;
    CWHText djtext(t,r,w);
    
    CWH *tuts[2];
    tuts[0] = &dj;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}