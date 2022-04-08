// object oriented programming

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class human
{
public:
    string name;
    int age;
    double wt;

    void eat()
    {
        cout << this->name << " is eating.\n";
    }
    void sleep()
    {
        cout << this->name << " is seeping.\n";
    }
    void walk()
    {
        cout << this->name << " is walking.\n";
    }
};

int main()
{

    human h1, h2, h3;
    h1.name = "rick";
    h1.age = 45;
    h2.name = "garey";
    h2.age = 45;
    h3.name = "sachin";
    h3.age = 45;

    cout << h1.name << endl
         << h1.age << endl;
    cout << h2.name << endl
         << h2.age << endl;
    cout << h3.name << endl
         << h3.age << endl;
    h1.eat();
    h2.sleep();
    h3.walk();

    return 0;
}