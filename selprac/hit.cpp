#include <iostream>
using namespace std;
 class cat
 {
     public:
     int id;
     cat(int in)
     {
         this->id = in;
     }

     void dis(void)
     {
         cout << id;
     }


 };
int main(){
   
   cat list(5);
   list.dis();
   
   return 0;
}