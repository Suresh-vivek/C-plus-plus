/*
Staircase Search Algorithm

Given a N*M matrix where every row and column is sorted in a ascending order
A key is given , find whether key is present or not in 

Time Complexity proportional to - N

*/

#include <iostream>
using namespace std;

void StaircaseSearch(int a[][1000],int m , int n, int key){
    int  i=0,j=n-1;
    
    int b =0;
    while(j>0 or  i< m){
        if(a[i][j] == key){
            cout<<key <<" is present "<<endl;
            b++;
            break;
        }
        else if(a[i][j] > key){
            j--;
        }
        else{
            i++;
        }

    }
    if(b==0){
        cout<<key <<"is not present"<<endl;
    }

}
int main(){

    int col,row,key;
    int a[1000][1000];

    cout << "Enter the number of rows "<<endl;
    cin>> row;

    cout << "Enter the number of columns " <<endl;
    cin >> col;
    
    cout<<"Enter the Key "<<endl;
    cin>> key;
    // Inputing the 2D array
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin>> a[i][j];

        }
    }

    StaircaseSearch(a,row,col,key);

    
}