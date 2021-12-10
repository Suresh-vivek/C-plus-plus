/*
Write a program to read sentence from user
cin.get() method read a single character
terminate the sentence when the character is new line (\n)
*/

#include <iostream>
using namespace std;

void sentence(char a[], int max_len, char delim ){ // delim is end condition

    int i = 0;
    char ch = cin.get();

    while(ch != delim){
        a[i]=ch;
        i++;
        if(i== (max_len -1)){
            break;
        }
        ch = cin.get();
    }
    // once out of loop

    a[i] = '\0';
    return;


}


int main(){

    char a[1000];
    int max_len = 1000;
    sentence(a,max_len ,'$');

    // in C++ there is a inbuilt function cin.getline that works exactly same as above sentence() function
    
    //cin.getline(a,max_len,'$');
    cout<< a<<endl;
    return 0;
}