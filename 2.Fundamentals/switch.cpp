#include <iostream>
using namespace std;

int main(){
    // Switch case
    /*
    Design a menu- where pressing a button gives you corresponding item

    B - Burger
    M - Maggi
    P - Pizza
    C - Coke
    D - Dosa
    S - Sambhar
    .
    .
    .
    and so on
    */

   char ch;
   cin>>ch;

   switch (ch)
   {
   case 'b': // for smallcase    
   case 'B':cout<<"Burger is served"<<endl;
            cout<<"Enjoy your Meal !!!!"<<endl;
       break;
   
   case 'm':
   case 'M':cout<<"Maggi is served"<<endl;
            cout<<"Enjoy your Meal !!!!"<<endl;
        break;
    
    case 'p':
    case 'P':cout<<"Pizza is served"<<endl;
            cout<<"Enjoy your Meal !!!!"<<endl;
        break;
    
    case 'c':
    case 'C':cout<<"Coke is served"<<endl;
            cout<<"Enjoy your Drink !!!!"<<endl;
        break;
    
    case 'd':
    case 'D':cout<<"Dosa is served"<<endl;
            cout<<"Enjoy your Meal !!!!"<<endl;
        break;
        
    case 's':
    case 'S': cout<<"Sambhar is served"<<endl;
            cout<<"Enjoy your Meal !!!!"<<endl;
        break;

   default: cout<<"Item Not Available"<<endl;
       break;
   }
}