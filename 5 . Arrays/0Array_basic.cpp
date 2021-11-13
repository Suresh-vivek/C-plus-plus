#include <iostream>
using namespace std;

int main(){
    //initialization of array
    int a[10] = {1,2,3};
    
    // Print all elements of Array
    for(int i = 0; i<10;i++){
        cout << a[i] << " ";
        
    }

    cout<<endl;
    // taking input
    for(int i = 0; i<5;i++){
        cin>>a[i];

    }

    //print updated value
    for(int i = 0; i<10;i++){
        cout << a[i] << " ";
        
    }
    cout<<endl;
    
    //update a single index of array
    a[8] = 100;


    //to find number of elemens in Array
    int n = sizeof(a)/sizeof(int);
    cout<<"Number of elements in Array "<<n <<endl;


    return 0;
}