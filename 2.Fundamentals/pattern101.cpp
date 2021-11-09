/*
N = 5

1
010
10101
0101010
101010101

alternating 0 and 1
*/

#include <iostream>
using namespace std;

int main(){
    int n,val=0;
    cout<<"Enter the numbeer of Rows "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j = 1 ;j<=(2*i -1);j++){
            val++;
            val%2==0?cout<<0:cout<<1;

        }
        cout<<endl;

    }
}