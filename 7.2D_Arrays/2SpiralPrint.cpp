/*
Question:  Spiral Print a 2D array
*/

#include <iostream>
using namespace std;

void spiral(int a[][1000],int m , int n){

    //Defining variables
    int sr = 0, er = m - 1; // sr - Start row , er - end row
    int sc = 0, ec = n - 1; // sc - start column , ec - end column

    while((sr <= er) and (sc <= ec) ){

        for(int j =sc ; j<= ec;j++){
            cout<< a[sr][j]<<" ";
        }
        sr++;

        for(int j = sr; j<= er;j++){
            cout<<a[j][ec]<<" ";
        }
        ec--;


        if(er > sr){
        for(int j= ec; j>=sc; j-- ){
            cout << a[er][j]<<" ";
        }

        er--;}
        
        if(ec > sc){
        for(int j = er;j>= sr; j--){
            cout<<a[j][sc]<<" ";
        }
        sc++;}
    }

}

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

    cout<<endl;
    spiral(a,row,col);

    
}