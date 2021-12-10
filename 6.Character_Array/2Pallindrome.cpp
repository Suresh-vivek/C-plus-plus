/*
Write a program to check given string is pallindrome or not

Pallindrome- string is same if we read from left to right or right to left
example: abcba, abba, abcdedcba

*/

#include <iostream>
using namespace std;
#include <cstring>

bool isPallindrome(char a[]){
    int i = 0;
    int j = strlen(a) - 1;

    while(i < j){
        if(a[i]==a[j]){
            i++;
            j--;
            
        }
        else{
            return false; 
        }
    } 
    return true;

}

int main(){
    char a[1000];
    cin.getline(a,1000,'\n');

    if(isPallindrome(a)){
        cout<<"Sentence is Pallindrome "<<endl;
    }
    else{
        cout<<"Sentence is not Pallindrome "<<endl;
    }
    return 0;
}