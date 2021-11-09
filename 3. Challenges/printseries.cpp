/*Problem Name: Print Series
Problem Difficulty: None
Problem Constraints: 0 < N1 < 100 
0 < N2 < 100
Problem Description:
Take the following as input.

A number (N1)  
A number (N2)  
Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.
Input Format: 
Sample Input: 10 
4
Output Format: 
Sample Output: 5 
11 
14 
17 
23 
26 
29 
35 
38 
41

*/

#include <iostream>
using namespace std;

int main(){
    int n1,n2,n=1,i=0;
    cout<<"Enter the numbers"<<endl;
    cin>> n1 >>n2;
    
    if((n1>0 and n1<100) and (n2>0 and n2<100)){
        while(i<n1){
            int s= 3*n +2;
            if(s%n2 !=0){
                cout<<s<<endl;
                i++;
            }
        n++;
        }
    }
    else{
        cout<<"numbers should be in range 0 to 100"<<endl;
    }
    return 0;
}