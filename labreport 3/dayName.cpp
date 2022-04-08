
#include <iostream>
using  namespace std;
int main(){
int week;
// string days[] = {"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
cout  << "enter the day to get the name of week: ";
cin  >> week;
if(week >7){
cout << "The enter value is wrong.";
}
else  {
 
      if(week == 1 ){
          cout << "sunday";
      }     
      else if(week == 2){
          cout << "monday";
      }     
      else if(week == 3){
          cout << "tuesday";
      }     
      else if(week == 4){
          cout << "wednesday";
      }     
      else if(week == 5){
          cout << "thursday";
      }     
      else if(week == 6){
          cout << "friday";
      }     
      else if(week == 7){
          cout << "saturday";
      }     
 }
       
}
