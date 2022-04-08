#include <iostream>
#include <string>
//#include <algorithm>
using namespace std;

class human
{
public:
    string name;
    int age;
    double wt;
    human(string name, int age, double wt){
        this->name = name;
        this->age = age;
        this->wt = wt;
    };

   
};

int main()
{

    human h1("sachin", 18, 60);

    cout << h1.name<<endl;
    cout << h1.age<<endl;
    cout << h1.wt<<endl;
    

    return 0;
}