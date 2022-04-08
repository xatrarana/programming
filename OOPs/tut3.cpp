// meory allocation  in object
// using arry in class

#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};
void shop ::setPrice(void)
{
    cout << " Enter the id of item no " << counter + 1 << " : \n";
    cin >> itemId[counter];
    cout << " Enter price of item: \n";
    cin >> itemPrice[counter];
    counter++;
}
void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop pand;
    pand.initcounter();
    int i = 0;
    while (i<= 5)
    {
        /* code */
        pand.setPrice();
        i++;
    }
    
    pand.displayPrice();
    return 0;
}