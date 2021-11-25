/*
Given an array find the maximum sum of subarray
*/

#include <iostream>
using namespace std;
#include <climits>

int main(){
    cout<<"Enter the number of elements in sub array "<<endl;
    int n,a[100],max_sum=INT_MIN;
    cin>>n;

    // Making array
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    
    // Creating sub arrays and finding sum
    for(int i=0;i<=n-1;i++){
        for(int j=i;j<=n-1;j++){
            int sum =0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
            }
            if(sum> max_sum){
                max_sum=sum;
            }

            
        }

    }
    cout<<"The maximum sum of a subarray is "<<max_sum<<endl;

}