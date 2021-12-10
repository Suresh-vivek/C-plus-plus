/*
Basics of 2D Array
*/

#include <iostream>
using namespace std;

int main(){
    //initializing a 2D Array
    int a[5][3];

    // Taking input
    for(int row = 0; row <= 4; row++){
        for(int col = 0; col <= 2; col++){
            cin>>a[row][col];
        }
    }
    
    // printing a 2D array
    for(int row = 0; row <= 4; row++){
        for(int col = 0; col <= 2; col++){
            cout<< a[row][col] << " ";
        }
        cout<<endl;
    }
}