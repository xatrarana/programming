#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    cout << "\n\nWelcome to guess game developed by xatra@" << endl;
    cout << "Instructions" << endl;
    cout << "Enter number(1-10)";

    cout << "\n\n";
    cout << "\t\t\t\t\t\t|-----------------------------|" << endl;
    cout << "\t\t\t\t\t\t|                             |" << endl;
    cout << "\t\t\t\t\t\t|--------- Guess Game --------|" << endl;
    cout << "\t\t\t\t\t\t|                             |" << endl;
    cout << "\t\t\t\t\t\t|-----------------------------|" << endl;

    cout << "\n\n";

    int usr_in;
    int score = 0;

    srand(time(0));

    int num_gen = rand() % 10 + 1;

    do
    {

        cout << "-------------------------------" << endl;
        cout << "|  Enter Number to guess:     |" << endl;
        cout << "-------------------------------" << endl;

        cout << "==> ";
        cin >> usr_in;
        cout << "\n\n";

        if (usr_in > num_gen)
        {
            cout << " \n";
            cout << "-------------------------------" << endl;
            cout << "|        That is HIGH.        |" << endl;
            cout << "-------------------------------" << endl;
        }
        else if (usr_in < num_gen)
        {
            cout << " \n";
            cout << "-------------------------------" << endl;
            cout << "|         That is Low.        |" << endl;
            cout << "-------------------------------" << endl;
        }
        else
        {
            cout << " \n";
            cout << "-------------------------------" << endl;
            cout << "|    That was correct :):)    |" << endl;
            cout << "-------------------------------" << endl;
        }

        score++;

    } while (num_gen != usr_in);

    cout << "\n";
    cout << "-------------------------------" << endl;
    cout << "|  Number is: "<< num_gen<<"               |"  << endl;
    cout << "-------------------------------" << endl;
    cout << "-------------------------------" << endl;
    cout << "|  Guess done: "<< score <<"              |" << endl;
    cout << "-------------------------------" << endl;

    int x;
    cout << "Press Q or q to exit. ";
    cin >> x;
   
}
