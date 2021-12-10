/*
Question:- Write a program to print a 2D Array in wave form
first column top to down , 2nd column bottom to up and so on...
*/

#include <iostream>
using namespace std;

int main(){
    int col,row;
    int a[1000][1000];

    cout << "Enter the number of rows "<<endl;
    cin>> row;

    cout << "Enter the number of columns " <<endl;
    cin >> col;
    
    // Inputing the 2D array
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin>> a[i][j];

        }
    }

    // Printing in wave form
    for(int i = 0; i< col;i++){
        
        if(i%2==0){
            // Even Column - Top to Down
            for(int j =0;j<row;j++){
                cout << a[j][i]<<" ";

            }

        }
        else{
            //Odd Column - Bottom to Top
            for(int j = row -1; j>=0;j--){
                cout<< a[j][i]<< " ";
            }

        }
    }
    cout << endl;
    return 0;
}