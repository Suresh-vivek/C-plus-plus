/*
Problem Name: Maximum Circular Sum
Problem Difficulty: None
Problem Constraints: 1<=t<=100 <br>
1<=n<=1000 <br>
|A<sub>i</sub>| <= 10000
Problem Description:
You are provided n numbers (both +ve and -ve).  Numbers are arranged in a circular form. You need to  find the maximum sum of consecutive numbers.

Input Format: First line contains integer t which is number of test case.<br>
For each test case, it contains an integer n which is the size of array and next line contains n space separated integers denoting the elements of the array.
Sample Input: 1
7
8 -8 9 -9 10 -11 12

Output Format: Print the maximum circular sum for each testcase in a new line.

Sample Output: 22

Approach 1
using Kadane's Algorithm 
Time Complexity -> O(N) for each Test Case

Find minimum subarray and subtract it from sum of array.

To find Minimum Subarray
1. Invert all the element
2. Then find maximum using Kadane's Algorithm (that maximum is actually minimum)
3. Subtract it from Sum of array.
*/

#include <iostream>
using namespace std;

int main(){
    int t, n,a[1000];

    cout<<"Enter the number of test Cases"<<endl;

    cin>>t;
    
    if(t>=1 and t<=100){

        for(int i = 1;i<=t;i++){
            
            cout<<"Enter the number of integers"<<endl;
            cin>>n;
            
            if(n >=1 and n<1000){

                for(int i = 0; i<n;i++){
                    cin>>a[i];

                }

                //Sum of array
                int sum =0;

                for(int i =0; i<n;i++){
                    sum+=a[i];
                }

                //inverting the elements
                for(int i = 0;i<n;i++){
                    a[i] = -a[i];
                }
                
                int curSum =0, maxSum =0;
                //Applying Kadane's algorithm
                for(int i =0;i<n;i++){
                    curSum+= a[i];
                    if(curSum<0){
                        curSum =0;
                    }
                    if(curSum >maxSum){
                        maxSum = curSum;
                    }


                }

                //minimum sub array
                int min = -maxSum;
                int max;
                max = sum - min;
                
                cout<<"Maximum sum of Subarray is "<<max<<endl;




            

            }
           else{


               cout<<"Number of Integers should be in between 1 and 1000"<<endl;
        }
        }

    }
    else{
        cout<<"Provide test cases in range of 1 to 100"<<endl;
    }
    return 0;
}