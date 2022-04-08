#include <iostream>
using namespace std;
 
class empoloyee {     // created class name empoloyee

    private:
         int   a,b,c;    // a b c are private variable important  salary increment bonus and many more examples
    public:
         int d, e;     // d  e are public  staff parking vechiles

         // two fucntions are created in the setData() and getData()
         void setData(int a1, int b1, int c1);  // Decelaration or prototype function
         void getData(){
             cout << "The vlaue of a is: "<< a << endl;
             cout << "The vlaue of b is: "<< b << endl;
             cout << "The vlaue of c is: "<< c << endl;
             cout << "The vlaue of d is: "<< d << endl;
             cout << "The vlaue of e is: "<< e << endl;
         }
};
             // scope resoultion function
void empoloyee :: setData(int a1, int b1, int c1){   // set data S
    a = a1;
    b = b1;            // these are private and  only acesed by some fucntion
    c = c1;
}



int main(){
   
   empoloyee xatra;
   xatra.d = 45;
   xatra.e = 46;     // these are public so can be accesd directly 
   xatra.setData(1, 2, 4);
   xatra.getData();
   
   return 0;
}