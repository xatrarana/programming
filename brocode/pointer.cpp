#include <iostream>
using namespace std;
 
int main(){

    //  && ---> address of operator
   string name = "xatra";
   int age = 5;

   cout << &name << endl;
   cout << &age << endl;


   // * ---> dereference operator

   string* pname = &name;
   int* Page = &age;

   cout << *pname << endl; 
   cout << *Page << endl; 
   
   return 0;
}