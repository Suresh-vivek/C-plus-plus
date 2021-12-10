/*
A sorted array and key is given , find a pair in array whose sum is equal to key

Approach - Two Pointer Approach
*/

#include <iostream>
using namespace std;

int main(){
    // Array should be sorted

    cout<<"Enter the number of elements in the array "<<endl;
    int n,a[100],key,i=0,sum;
    cin>>n;
    int j=n-1;
    
    cout<<"Enter the key "<<endl;
    cin>>key;
    

    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    
    int m=0;
    while(i<j){
        sum=a[i] + a[j];
        if(sum>key){
            j--;
        }
        else if(sum<key){
            i++;
        }
        else if(sum == key){
            cout<<"Pair is present "
            <<a[i]<<" "<<a[j]<<endl;
            i++;
            j--;
            m++;
        }
    }
    if(m==0){
        cout<<"pair is not present"<<endl;
    }
    
    
}