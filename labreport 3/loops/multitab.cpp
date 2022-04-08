#include <iostream>
using namespace std;

int main(){


int user_num, multi;

cout << "Enter the number for multiplication tabe: \n";

cin >> user_num;

for (int i = 1; i < 11; i++){

    // cout << i;
    multi = user_num * i;

    cout << multi<<endl;

    }

return 0;
}