/*
Given a N*M matrix and a key, find whether key is present in matrix or not

Algorithm - Brute Force(Searching all rows and columns)
Time Complexity -> N^2
*/

#include <iostream>
using namespace std;

void Linear_search(int a[][1000],int m , int n,int key){
    bool success = false;
    for(int i = 0; i<m;i++){
        for(int j = 0; j<n;j++){
            int n = a[i][j];
            if(n == key){
                success = true;
                break;
            }
        }
    }
    if(success){
        cout<< key<<" is present"<<endl;
    }
    else{
        cout<<key<<" is not present"<<endl;
    }
    




}

int main(){
    int row,col,key;
    int a[1000][1000];

    cout<< "Enter the number of Rows "<<endl;
    cin>> row;

    cout<<"Enter the number of Columns "<<endl;
    cin>> col;
    
    cout<<"Enter the Key "<<endl;
    cin>> key;

    // Taking matrix as input
    for(int i =0 ; i<row;i++){
        for(int j =0;j<col;j++){
            cin >> a[i][j];
        }
    }
    
    Linear_search(a,row,col,key);
    return 0;
}