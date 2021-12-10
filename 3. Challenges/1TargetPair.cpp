/*
Problem Name: Arrays-Target Sum Pairs
Problem Difficulty: None
Problem Constraints: Length of the arrays should be between 1 and 1000.
Problem Description:
Take as input N, the size of array. Take N more inputs and store that in an array. 
Take as input “target”, a number. Write a function which prints all pairs of numbers which sum to target.
Input Format: The first line contains input N. Next N lines contains the elements of array and (N+1)th line contains target number.
Sample Input: 5
1
3
4
2
5
5
Output Format: Print all the pairs of numbers which sum to target. Print each pair in increasing order.
Sample Output: 1 and 4
2 and 3
*/

/*
Solution
first sort the array then apply two pinter method
*/
#include <iostream>
using namespace std;
#include <algorithm> 
int main(){
    int a[1000],n,key,sum;
    cout<<"Enter the number of integers "<<endl;
    cin >> n;
    cout<<"Enter the key "<<endl;
    cin>>key;

    for(int  i =0; i<n;i++){
        cin>>a[i];
    }
    
    //sorting the array
    sort(a,a+n);

    int i =0,b=0,j=n-1;
    
    while(i<j){
        sum = a[i] + a[j];
        if(sum == key){
            cout << a[i] <<" and "<<a[j] <<endl;
            b++;
            i++;
            j--;
            

        }
        if(sum > key){
            j--;
        }
        if(sum < key){
            i++;
        }


    }

    if(b == 0){
        cout<<"Pair is not present"<<endl;
    }

}