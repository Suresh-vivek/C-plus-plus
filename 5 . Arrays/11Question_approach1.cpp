/*
Question
A sorted array and key is given , find a pair in array whose sum is equal to key

Approach- Brute Force
Find all the pairs , check that they are equal to key

Time Complexity is proportional to N^2
*/

#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the number of elements in the array "<<endl;
    int n,a[100],key,sum;
    cin>>n;
    
    cout<<"Enter the key "<<endl;
    cin>>key;

    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }

    //Making pairs
    int i,j,m=0;
    for(i =0; i<=n-2;i++){
        for(j = i+1; j<=n-1;j++){
            sum = a[i] + a[j];

            if(sum==key){
                cout<<"Pair is present "<<a[i]<<" "<<a[j]<<endl;
                m++;
                
            }
            
        }
    }
    
    if(m==0){
        cout<<"Pair is not present"<<endl;
    }


    return 0;
}