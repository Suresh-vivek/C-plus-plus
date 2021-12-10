/*
read a list of strings and store it in a 2D character array
*/

#include <iostream>
using namespace std;

int main(){
    char a[100][1000];
    cout<<"Enter the number of strings"<<endl;
    int n;
    cin>>n;

    cin.get();

    for(int i  = 0;i<n;i++){
        cin.getline(a[i],1000);
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
