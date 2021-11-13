/*
Write a program to print following pattern
ABCDE
ABCD
ABC
AB
A
n=5
*/

#include <iostream>
using namespace std;

void pattern(){
    cout<<"Enter the Number "<<endl;
    int n;
    cin>>n;
   

    while(n>0){
         char alphabet = 'A';
        for(int i = 1; i<=n;i++){
            cout<<alphabet;
            alphabet +=1; //it will update ASCII value of alphabet
        }
        cout<<endl;
        n--;
    }
}

int main(){
   
    pattern();
}