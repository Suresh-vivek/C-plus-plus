/*
Insertion sort Algorithm
*/

#include <iostream>
using namespace std;

void Insertion_sort(int a[],int n){

    for(int i =1;i<=n-1;i++){
        int key = a[i];
        int j = i-1;

        while(j>=0 and a[j]>key){
            a[j+1]=a[j];
            j-=1;
            
        }
        a[j+1]=key;

    }
}

int main(){
    cout<<"Enter the number of elements in Array :"<<endl;
    int n,a[100];
    cin>>n;

    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    Insertion_sort(a,n);

    for(int i =0; i<=n-1;i++){
        cout<< a[i]<<" ";
    }

    cout<<endl;

}