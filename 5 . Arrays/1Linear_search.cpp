#include <iostream>
using namespace std;

int main(){

    int n,key;
    cout<<"Enter the number of element in Array "<<endl;
    cin>>n;

    int a[100];
    for(int i =0; i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter the number to be search"<<endl;
    cin>>key;
    int i;

    // Linear Search
    for(i = 0 ; i<n; i++){
        if(a[i]==key){
            cout<<key <<" is present in array"<<endl;
            break;
        }


    }
    
    if(i==n){
        cout<<key <<" is not present in Array"<<endl;
    }
    
    return 0;
}