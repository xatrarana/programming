#include <iostream>
using namespace std;
 


 int multi(int c){
     
     int out;
     for (int i = 1; i <= 10; i++)
     {
          out = c * i;
         cout << out << ", ";
         
         
     }
     return out;
 }

  int multiwhile(int c){

      
      int i = 1;
      int mul;
      while (i <= 10)
      {
          mul = c *i;
          cout << mul << ",";
          i++;
          
      }
     return mul;
  }


int main(){

  cout << "ENTER THE NUMBER FOR MULTIPLICATION"<< endl;
  int x;
   cin >> x; 

   cout << "MULTIPLICATION WITH FOR LOOP: " << multi(x)<< endl;
    cout << "MULTIPLICATION WITH WHILE LOOP: " << multiwhile(x)<< endl;

return 0;
}