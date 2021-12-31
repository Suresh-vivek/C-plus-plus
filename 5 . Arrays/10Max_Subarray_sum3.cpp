/*
Given an array find the maximum sum of subarray
here we are using another approach (Kadane's Algorithm)
*/

#include <iostream>
using namespace std;


int main(){
    cout<<"Enter the number of elements in  array "<<endl;
    int n,a[100],maxSum=0,curSum=0;
    cin>>n;
    
 

    // Making array
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
        
    }
    
    // Creating sub arrays and finding sum
    for(int i=0;i<=n-1;i++){
        curSum+=a[i];
        if(curSum<0){
            curSum=0;
        }
        if(curSum > maxSum){
            maxSum = curSum;
        }

    }
    cout<<"The maximum sum of a subarray is "<<maxSum<<endl;

}