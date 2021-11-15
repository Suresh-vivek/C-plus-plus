/*
Binary search Algorithm
time complexity - Log(n)

*/

#include <iostream>
using namespace std;

int binary_search(int *a,int n){
    cout<<"Enter the element to be search : "<<endl;
    int key,s=0,e=n-1,m;
    cin>>key;

    while(s<=e){
        m = (s+e)/2;
        if(a[m]==key){
            cout<<"Element is present at index ";
            return m;
        }
        else if(a[m]> key){
            e= m-1;
        }
        else{
            s = m+1;
        }
    }
    
    cout<<"Element is not present "<<endl;
    return -1;


}
int main(){

    int n,key;
    cout<<"Enter the number of element in Array "<<endl;
    cin>>n;

    int a[100];
    for(int i =0; i<n;i++){
        cin>>a[i];
    }
    
    cout<<binary_search(a,n)<<endl;
    
}