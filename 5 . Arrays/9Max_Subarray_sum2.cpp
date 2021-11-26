/*
Given an array find the maximum sum of subarray
here we are using another approach (cummulative sum)
*/

#include <iostream>
using namespace std;
#include <climits>

int main(){
    cout<<"Enter the number of elements in sub array "<<endl;
    int n,a[100],max_sum=INT_MIN,csum[100],sum;
    cin>>n;
    cout<<"Enter the first element of array"<<endl;
    cin>>a[0];
    csum[0]=a[0];


    // Making array
    for(int i=1;i<=n-1;i++){
        cin>>a[i];
        csum[i]=csum[i-1] +a[i];
    }
    
    // Creating sub arrays and finding sum
    for(int i=0;i<=n-1;i++){
        for(int j=i;j<=n-1;j++){
            sum =0;
            sum= csum[j] - csum[i-1];
           
            
            if(sum> max_sum){
                max_sum=sum;
            }

            
        }

    }
    cout<<"The maximum sum of a subarray is "<<max_sum<<endl;

}