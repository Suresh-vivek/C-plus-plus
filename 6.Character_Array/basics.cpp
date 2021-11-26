/*
Character Array Basics
*/

#include <iostream>
using namespace std;

int main(){
    // Initializing a character array
    char a[100];
    
    //initializing and declaring a character array
    char b[]= {'a','b','c'}; // its size is 3
    char c[10]={'a','b','c','d','\0'}; // its size is 10 but contains 3 character values and other garbage values
                                  // Always terminate the array by null(\0)
    // printing a character array
    cout << c<<endl; // unlike integer array we don't have to iterate over each element
                    // if we use this in integer array we will get address of the array instead of array elements
                    // this happens only in case of character Array(Special Behaviour)

    // Input
    char s[10];
    cin>>s; // We don't have to iterate to take input ,s will take atmost 10 characters as input
           // null character is automatically added to the end of the input
           // '/n' next line converts to null character in input buffer

    cout<<s<<endl;

}