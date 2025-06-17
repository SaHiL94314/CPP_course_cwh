#include <iostream> 
using namespace std;
class Shop
{
    int itemId[100];   // 100 refers to the size , it means that we can store 100 integer values here like 23,100,9998,.....
    int itemPrice[100];
    int counter;       // we can also initialize counter value as 0 here without making function 
 
public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setPrice(void); 
    void displayPrice(void);
};
void Shop :: setPrice(void){
    cout<<"Enter Id of your item number "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of your item "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void Shop :: displayPrice(void){
    for(int i = 0; i<counter; i++)
    {
        cout<<"The price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main()
{
Shop dukaan;
dukaan.initcounter();
dukaan.setPrice();
dukaan.setPrice();
dukaan.setPrice();
dukaan.setPrice();
dukaan.displayPrice();
    return 0;
}