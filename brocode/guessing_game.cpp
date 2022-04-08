#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h> // srand, rand
#include <time.h>   // time
using namespace std;
 
int main(){
   
    int number;
    int response;
    int score  = 0;

    srand(time(NULL));  // random number --->

    number = rand() % 10 + 1;

    do
    {
        /* code */
        cout << " ENTER YOUR NUMBER: ";
        cin >> response;
        if (response > number)
        {
            cout << "That is high.\n";
            
        }
        else if (response < number)
        {
            cout << "That is low.\n";

        }
        else
        {
            cout << "That was correct.\n";
        }
        score++;
        
    } while (number != response);
    
    cout << "\n Number is: " << number;
    cout << "\n guess: " << score;
   
   return 0;
}