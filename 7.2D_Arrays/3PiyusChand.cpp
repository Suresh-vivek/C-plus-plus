/*
*/



#include <iostream>
using namespace std;

void magical_park(int a[][1000],int m, int n, int k , int s){
    
    bool success = true;

    for(int i =0; i<m;i++){
        for(int j =0; j<n;j++){

            char ch = a[i][j];
            if(s<k){
                success = false;
                break;
            }
            if(ch == '.'){
                s -=2;
            }
            else if(ch == '*'){
                s+=5;

            }
            else{
                break;
            }
            if(j != n-1){
                s--;
            }
        }
    }

    if(success){
        cout<<"Yes"<<endl;
        cout << s <<endl;
    }

}
int main(){
    int col,row,k,s;
    int a[1000][1000];

    cout << "Enter the number of rows "<<endl;
    cin>> row;

    cout << "Enter the number of columns " <<endl;
    cin >> col;
    
    cout << "Enter the minimum strength "<<endl;
    cin >> k;

    cout << "Enter the given Strength "<<endl;
    cin >> s;

    // Inputing the 2D array
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin>> a[i][j];

        }
    }

    magical_park(a,row,col,k,s);
}