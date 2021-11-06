/*
Pattern is


        1
       232
      34543
     4567654

     n = 4
*/


#include <iostream>
using namespace std;

int main(){
     
     int n,i=1,k;
     cout<<"Enter the number of Rows :"<<endl;
     cin >>n;
     

     while(i<=n){

         //for spaces
         int s = n-i;
         while(s>0){
             cout<<" ";
             s=s-1;
         }
        
        k=i;
        int j =1;
        while(j<=i){
            cout<<k;
            j=j+1;
            k=k+1;
        }
        
        k=k-2;
        j=1;
        while(j<i){
            cout<<k;
            j=j+1;
            k=k-1;

        }
        cout<<endl;
      i+=1;
     }
    
    return 0;

}