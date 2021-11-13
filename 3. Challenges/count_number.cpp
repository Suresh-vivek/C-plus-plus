/*
Problem Name: Count Digits
Problem Difficulty: None
Problem Constraints: 0 <= N <= 1000000000 
0 <= Digit <= 9
Problem Description:
Take the following as input.  
A number  
A digit  
Write a function that returns the number of times digit is found in the number. Print the value returned.
Input Format: Integer (A number) 
Integer (A digit)
Sample Input: 5433231 
3
Output Format: Integer (count of times digit occurs in the number)
Sample Output: 3

*/

#include <iostream>
using namespace std;

int main(){

    int n,dig,val=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Enter the digit to be count"<<endl;
    cin>>dig;

    if((n>=0 and n<=1000000000) and (dig>=0 and dig<=9)){

        while(n!=0){
            
            if(n%10 == dig){
                val++;
            }
            n=n/10;
        }
        cout<<val<<endl;

    }
    
    return 0;
}