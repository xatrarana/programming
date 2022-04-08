#include <iostream>
using namespace std;
 
int main(){
   
//    string cars[] = {"bmw", "tesla", "bugati","help"};
//    cars[3] = "audi";
//    cout << cars[3] <<endl;
   
//    for (int  i = 0; i < size(cars); i++)
//    {
//       cout << cars[i] <<endl;
//    }


     int number;
     cout << "How many cars do you have: ";
     cin >> number;
     cin.ignore(); // ignore the buffer 
        
        // pointers
     string* pCars = new string[number];

     for (int i = 0; i < number; i++)
     {
         cout << "Enter car #: " << i+1 << endl;
         getline(cin, pCars[i]);
     }

     cout << "Here is your virtual garage: \n";
     cout << "-----------------------------\n";


     for (int  i = 0; i < number; i++)
     {
         cout << " Parking sport #" << i+1 << " " << pCars[i] << endl;
     }
     
     

   
   return 0;
}