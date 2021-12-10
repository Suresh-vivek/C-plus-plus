/*
Given a N*M matrix where every row and column is sorted in a ascending order
A key is given , find whether key is present or not in 

Algorithm - Use Binary Search to find element in each row
Time Complexity proportional to - (N* logN)
*/

#include <iostream>
using namespace std;

bool Binarysearch(int a[][1000],int n,int key,int row){
    int s =0,e=n-1,m;
    
    int g =0;
    while(s<=e){
        m = (s+e)/2;
        if(a[row][m] == key){
            g++;
            return true;
            break;

        }
        else if(a[row][m] > key){
            e=m-1;
        }
        else{
            s= m+1;
        }
    }
    
    if(g==0){
        return false;
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
  int b=0;
    for(int i =0;i<row;i++){

        if(Binarysearch(a,col,key,i)){
            cout<<key <<"is present"<<endl;
            b++;
            break;

        }
        
    }
    if(b==0){
        cout<<key <<"is not present"<<endl;
    }
    return 0;
}