/*
Covert a Binary number to decimal

Input
4 = N
101
100
1011
1111

output
5
4
11
15
*/

#include <iostream>
using namespace std;

int main(){

    int N,n,r;
    cout <<"Enter total number of Binary digits to convert :"<<endl;

    cin>>N;

    while(N>0){
        cin >> n;
        int p = 1,ans=0;
        
        while(n >0){
            r=n%10;
            ans = ans + r*p;
            n=n/10;
            p=p*2;

        }
        cout << ans <<endl;
        
        N=N-1;


    }
}