/*
Question

1
1 1
1 1 1
1 0 0 1
1 1 1 1 1
1 0 0 0 0 1

n =6

for odd number of row print 1
for even number of row print 1 at first and last column ,for remaining print 0
*/



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of rows :"<<endl;
    cin >>n;
    int row = 1;

    while(row <=n){
        int col = 1;

        if(row%2 !=0){
            while(col <= row){
                cout<<1 <<" ";
                col=col+1;
            }
            
        }
        else{
            cout<<1<<" ";

            while(col<= row -2){
                cout<<0<<" ";
                col=col+1;
            }
            cout<<1<<" ";

        }
        cout<<"\n";
        row = row+1;

    }
    return 0;
}