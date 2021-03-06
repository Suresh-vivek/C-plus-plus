/*
Write a program to remove consecutive duplicates from a string

example:-
cccoooding -> coding
*/

#include <iostream>
#include <cstring>
using namespace std;

void removeDuplicates(char a[]){

    int l = strlen(a);
    if(l==1 or l==0){
        return;
    }

    int prev =0;
    for(int current =1; current < l;current++){
        if(a[prev] != a[current]){
            prev++;
            a[prev] = a[current];
        }
    }

    a[prev + 1] = '\0'; // making last charcter of string null to terminate the string
    return; 

}

int main(){
    char a[1000];
    cin.getline(a,1000);

    removeDuplicates(a);

    cout<< a <<endl;
    return 0;
}