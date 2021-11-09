/*
Problem Name: Revising Quadratic Equations
Problem Difficulty: 1
Problem Constraints: -100 <= a, b, c <= 100
Problem Description:
Given coefficients of a quadratic equation , you need to print the nature of the roots (Real and Distinct , Real and Equal or Imaginary) and the roots. <br>
If Real and Distinct , print the roots in increasing order. <br>
If Real and Equal , print the same repeating root twice <br>
If Imaginary , no need to print the roots.


Note : Print only the integer part of the roots.
Input Format: First line contains three integer coefficients a,b,c for the equation ax^2 + bx + c = 0.
Sample Input: 1 -11 28
Output Format: Output contains one/two lines. First line contains nature of the roots .The next line contains roots(in non-decreasing order) separated by a space if they exist. If roots are imaginary do not print the roots.
Output the integer values for the roots.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a, b , c;
    float disc;
    int root1,root2;
    cout<<"Enter the Cofficients "<<endl;
    cin>>a >>b >>c;

    if((a>= -100 and a<=100) and (b>= -100 and b<=100) and (c>= -100 and c<= 100 )){

        disc= sqrtf(b*b- 4*a*c);
        
        if(disc==0){
            
            cout<<"Real and Equal "<<endl;
        }
       else if(disc>=0){
            
            cout<<"Real and Distinct "<<endl;
        }
        else{
            cout<<"Imaginary roots"<<endl;
        }
    root1 = (-b + disc)/(2*a);
    root2 = (-b - disc)/(2*a);
    cout<<root2 <<" "<<root1<<endl;

    }   
}