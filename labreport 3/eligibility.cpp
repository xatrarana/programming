// 14. C++ program to find the eligibility of admission for an engineering course based on the criteria.

#include <iostream>
using namespace std;

int main(){
// score
int score;
int gpa;
bool pass = false;
cout << "Enter the score you obatin in the entrance exam: ";
cin >> score;
if (score < 59){
    cout << "sorry you are not eligible for admission";
}
else{
    pass = true;
    cout << "you are accepted and proccsed with the documents.\n";
    if(pass = true){
        cout << "enter your gpa:\n";
        cin >> gpa;
        cout << "your gpa is: "<<gpa;

    }
}


return 0;
}