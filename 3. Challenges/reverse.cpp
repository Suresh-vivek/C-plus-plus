/*
Problem Name: Print reverse
Problem Difficulty: 1
Problem Constraints: 0 <= N <= 1000000000
Problem Description:
Take N as input, Calculate it's reverse also Print the reverse.
Input Format: 
Sample Input: 123456789
Output Format: 
Sample Output: 987654321

*/

#include <iostream>
using namespace std;

int main(){
    int num,r,rev=0;
    cout << "Enter the number "<<endl;
    cin>>num;

    if(num>=0 and num<= 1000000000){
        while(num>0){
            r = num%10;
            rev= rev*10 + r;
            num=num/10;

        }
        cout<<"Reverse number is "<<rev<<endl;
        }
    else{
        cout<<"Print number in range 0 to 1000000000"<<endl;
    }
}