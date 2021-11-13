/*
Fibonacci series
0 , 1 , 1 , 2 , 3 , 5 , 8  , 13 .......
next term is sum of previous two terms
write a program to print nth fibonacci number
*/

#include <iostream>
using namespace std;

int fibonacci( int n){
    
    long long int c,a=0,b=1;
    for(int i =1;i<=n-2;i++){
        c=a+b;
        a=b;
        b=c;
        
    }
    return c;
}

int main(){
    cout<<"Enter the number "<<endl;
    int n;
    cin>>n;
    cout<<n<<"th Fibonacci number is  "<<fibonacci(n)<<endl;

}