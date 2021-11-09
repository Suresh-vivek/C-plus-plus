#include <iostream>
using namespace std;

int main(){

    /* Given a list of numbers where every number occurs twice except one, find that unique number
    without using list

    Here we will use Bitwise XOR operator due to  different properties of XOR
    a^b^a = b
    a^0 = 0
    a^a = 0
    */

   int n,no,ans=0;
   cout<<"Enter number of integers in list"<<endl;
   cin>>n;
   

   for(int i=0;i<n;i++){
       cin>>no;
       ans ^=no;

   }
   cout<<"Unique number is "<<ans <<endl;
}