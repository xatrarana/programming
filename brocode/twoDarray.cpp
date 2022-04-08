#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{

    // 2D aray

    int num[3][4] = 
    {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << num[i][j]<< " ";
        }

        cout << endl;
    }
    
    return 0;
}