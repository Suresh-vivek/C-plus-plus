/*
Bubble sort Algorithm
 -> Move large element towards end
*/

#include <iostream>
using namespace std;

void Bubble_sort(int a[],int n){

    // Move N-1 elements towards end
    for(int i = 1;i<= n-1;i++){

        for(int j =0; j<=(n-i-1); j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }

    }

}

int main(){
    cout<<"Enter the number of elements in array "<<endl;
    int n,a[100];
    cin>>n;
    
    for(int i = 0; i<n;i++){
        cin>>a[i];
    }
    Bubble_sort(a,n);
    
    cout<<"Sorted Array is "<<endl;
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;

}