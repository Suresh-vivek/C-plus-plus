/*
Take an input n from user
1<=n <= 10^9
Write a function to ,find the number of trailling zeroes in n!(n factorial) 
*/

#include <iostream>
using namespace std;

int findingzeroes(int n){
    int ans =0;
    for(int d = 5; n/d >=1;d*=5){
        ans+=n/d;
    }
    return ans;
}

int main(){
    cout<<"Enter the numbers"<<endl;
    
    long long int n;
    cin>>n;
    cout<<findingzeroes(n)<<" trailling zeroes"<<endl;
}