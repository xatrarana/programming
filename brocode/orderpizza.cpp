#include <iostream>
#include <string>
using namespace std;

class pizza
{
    public:
       string bread;
       string sauce;
       string stuffing;
       string topping;

       pizza(string bread, string sauce, string stuffing, string topping){
           this->bread = bread;
           this->sauce = sauce;
           this->stuffing = stuffing;
           this->topping = topping;
       }
       pizza(string bread, string sauce, string stuffing){
           this->bread = bread;
           this->sauce = sauce;
           this->stuffing = stuffing;
           
       }
       pizza(string bread, string sauce ){
           this->bread = bread;
           this->sauce = sauce;
          
       }
       pizza(string bread ){
           this->bread = bread;
          
       }

       void order_pizza(){

           cout << "HERE IS YOUR ";
           if (!bread.empty())
           {
               cout <<  bread << " ";
           }
           if (!sauce.empty())
           {
               cout << sauce << " ";
           }
           if (!stuffing.empty())
           {
               cout <<  stuffing << " ";
           }
           if (!topping.empty())
           {
               cout <<  topping << " ";
           }
           cout << " pizza" << endl;
       }
};
 
int main(){
   
   string bread1, sauce2, toppings3, stuffing4;
   cout << "\nenter bread ";
   cin >> bread1;
   cout << "\nenter sauce ";
   cin >> sauce2;
   cout << "\nenter toppings ";
   cin >> toppings3;
   cout << "\nenter stuffing ";
   cin >> stuffing4;

   pizza first_pizza(bread1,sauce2,stuffing4,toppings3);
   first_pizza.order_pizza();
   return 0;
}