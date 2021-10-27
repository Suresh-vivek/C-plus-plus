#include <iostream>
using namespace std;

int main(){
    //Program to find the sum of numbers from 1 to n

    int n;
    //taking input
    cin >> n;

    //Intial conditions
    int i =1,sum =0;
   

    //loop
    while(i <= n){
        sum = sum + i;
        i = i +1 ; //Update condition

    }

    cout <<"Sum of numbers from 1 to "<< n << " is : " <<sum <<endl;
    return 0;
}