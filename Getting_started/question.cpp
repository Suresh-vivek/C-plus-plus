/*
Question

You are given N, followed by list of N numbers
output should be square of those numbers

example
N = 3
1
2
3

output
1
4
9
*/

#include <iostream>
using namespace std;

int main(){
      
      int N;
      cout <<"Enter the number :"<<endl;
      cin >> N;
 
      int n,s;
      while(N > 0){
          cin >>n;
          s=n*n;
          cout<< s <<endl;
          N = N -1;

      }
    
}