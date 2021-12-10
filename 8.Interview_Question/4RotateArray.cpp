/*
Given a N*N array
Rotatea 2D array 90 degree anticlockwise
*/

#include <iostream>
using namespace std;

void rotate(int a[][1000],int n){
    //First we reverse each row of array than take it's transpose

    //reversing row
    for(int i = 0; i<n;i++){
        int start_col =0, end_col = n-1;

        while(start_col < end_col){
            swap(a[i][start_col],a[i][end_col]);
            start_col++;
            end_col--;
        }
    }
    
    //Taking Transpose- swaping lower triangular matrix with upper triangula matrix
    for(int i=0;i<n;i++){
        for(int j =0; j<n;j++){
            if(i<j){
                swap(a[i][j],a[j][i]);
            }
        }
    }

}

int main(){
    int n;
    int a[1000][1000];

    cout << "Enter the dimension of Array "<<endl;
    cin>> n;

    // Inputing the 2D array
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>> a[i][j];

        }
    }
    rotate(a,n);
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }

}