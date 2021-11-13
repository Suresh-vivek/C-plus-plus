/*
Take n as an input
write a program to print prime numbers upto n
*/

#include <iostream>
using namespace std;

bool isPrime(int n){
    //this function will check number is prime or not
    for(int i=2; i<=n-1;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void printPrime(int N){
    // This function print prime numbers it does not return anything
    for(int i=2;i<=N;i++){
        if(isPrime(i)){
            cout<<i <<" ";
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    printPrime(n);
    cout<<endl;

    return 0;
}