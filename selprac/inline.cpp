#include <iostream>
using namespace std;
 

inline float intrest(int money_in, float rate=1.04){   // defalult arguments
    return money_in * rate;
}


int main(){
int money;
cout << "Enter the money:> ";
cin >> money;

cout << "you will recive " << intrest(money) << "rs for " << money <<"rs.\n";
cout << "vip  will recive " << intrest(money, 1.1) << "rs for " << money <<"rs.";

return 0;
}