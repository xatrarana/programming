#include <iostream>
#include <string>
using namespace std;

class login
{
    string usr_name[100];
    string usr_pass[100];
    string usr_in;
    string usr_passin;
    int count;

public:
    void initcount(void) { count = 1; }
    void signup(void);
    void signin(void);
    void getCheck(void);
    void getDisplay(void);
};

void login ::signup(void)
{
    cout << "\t\tREGISTER\n\n";      // for registering the user
    cout << "Enter username: ";
    cin >> usr_name[count];
    cout << "Enter Password: ";
    cin >> usr_pass[count];
    count++;
}
void login ::signin(void)
{
    cout << "\n\n\t\tSIGNUP\n\n";      // user login after register
    cout << "Username: "; 
    cin >> usr_in;
    cout << "Password: ";
    cin >> usr_passin;
    getCheck();
}
void login ::getCheck(void)
{

    for (int i = 0; i < count; i++)
    {
         if ((usr_name[i] == usr_in) && (usr_pass[i] == usr_passin))
         {
             cout << "\nWEL-COME " << usr_in << endl;
             getDisplay();
             exit(0);
         }
         else
         {
             cout << "sorry wrong username or password.";
             signin();
         }
        // cout << usr_name[i];
        // cout << usr_pass[i];
    }
    // cout << usr_in;
    // cout << usr_passin;
}

void login ::getDisplay(void)
{

    cout << "This is the home page for you.\n";
    cout << "Tab + for more tutorials.\n";
}

int main()
{
    login sign;
    sign.initcount();
    sign.signup();
    sign.signin();

    return 0;
}