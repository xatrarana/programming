#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    char keayboard[4][10] =
        {
            {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'},
            {'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P'},
            {'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';'},
            {'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/'}

        };

        for (int rows = 0; rows < 4; rows++)
        {
            for (int  column = 0; column < 10; column++)
            {
                cout << keayboard[rows][column] << " ";
            }
            
            cout << endl;
        }
        

    return 0;
}