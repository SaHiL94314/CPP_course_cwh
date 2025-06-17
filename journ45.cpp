#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll number is " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float Maths, Physics;

public:
    void set_marks(float m1, float m2)
    {
        Maths = m1;
        Physics = m2;
    }
    void print_marks()
    {
        cout << "Your result is here: " << endl
             << "Maths: " << Maths << endl
             << "Physics: " << Physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    float Score;

public:
    void set_score(float m1)
    {
        Score = m1;
    }
    void print_score()
    {
        cout << "Your PT score is " << Score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float Total;

public:
    void display()
    {
        Total = Maths + Physics + Score;
        print_number();
        print_marks();
        print_score();
        cout << "Your Total score is " << Total << endl;
    }
};
int main()
{
    Result Sahil;
    Sahil.set_number(555);
    Sahil.set_marks(97, 96);
    Sahil.set_score(9);
    Sahil.display();

    Result Shalini;
    Shalini.set_number(9);
    Shalini.set_marks(97.5, 96.1);
    Shalini.set_score(9.2);
    Shalini.display();

    return 0;
}