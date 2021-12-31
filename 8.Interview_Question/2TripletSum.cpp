/*
Problem Name: Arrays-Target Sum Triplets
Problem Difficulty: None
Problem Constraints: Length of Array should be between 1 and 1000.
Problem Description:
Take as input N, the size of array. Take N more inputs and store that in an array. 
Take as input “target”, a number. Write a function which prints all triplets of numbers which sum to target.
Input Format: First line contains input N. <br> Next line contains N space separated integers denoting the elements of the array. <br> The third line contains a single integer T denoting the target element.
Sample Input: 9
5 7 9 1 2 4 6 8 3
10
Output Format: Print all the triplet present in the array in a new line each. The triplets must be printed as A, B and C where A,B and C are the elements of the triplet ( A<=B<=C) and all triplets must be printed in sorted order. Print only unique triplets.
Sample Output: 1, 2 and 7
1, 3 and 6
1, 4 and 5
2, 3 and 5

Time Complexity -> N^2
*/

#include <algorithm>
#include <iostream>
using namespace std;


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
    
    //marker
    int v =0;
    for(int i =0;i<n;i++){
        int b = i+1,j=n-1;

        while(b<j){
            int sum = a[i]+a[b] + a[j];

            if(sum == key){
                cout << a[i] <<" , "<<a[b]<<" and "<<a[j]<<endl;
                b++;
                j--;
                v++;

            }
            if(sum>key){
                j--;
            }
            if(sum<key){
                b++;
            }

        }
    }

    if(v == 0){
        cout<<" Triplet Pairs are not present"<<endl;
    }

    
}