
// nestin of class memeber

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    void chk(void);
public:
    void read(void);
    // void chk(void);   // made private cant acess by user
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << " enter the binary: ";
    cin >> s;
}

void binary ::chk(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "wrong value.\n";
            exit(0);
        }
    }
}
void binary ::ones(void)
{
         chk();    // nesting function

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "displaying numbers\n";
    for (int i = 0; i < s.length(); i++)
    {

        cout << s.at(i);
    }
}
int main()
{
    // OOps - classes and objects

    binary b;
    b.read();
    // b.chk();   // cant acess from public
    b.ones();
    b.display();

    return 0;
}