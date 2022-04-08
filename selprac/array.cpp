#include <iostream>
using namespace std;
 
class login{ 

    private:
       string username, userpass;
    public:
      void setData(string name, string pass);
      void getData(){

          cout << username << endl;
          cout << userpass << endl;
          

          if ( "apple" == username && "apple123" == userpass)
          {
              cout << "SUCESS";
          }
          else
          {
              cout << "ERROR";
          }
          
          

          

            
      }
};

void login ::setData(string name, string pass){
    username = name;
    userpass = pass;

}




int main(){
   
   
   
   string usr_name, usr_pass;
   cout << " username: ";
   cin >> usr_name;
   
   cout << "password: ";
   cin >> usr_pass;


   login sign;
   sign.setData(usr_name, usr_pass);
   sign.getData();



   return 0;
}