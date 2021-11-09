/*
Question:
Take a string as a input from user and find out number of alphabets ,digits,spaces and special
characters in it.
*/

#include <iostream>
using namespace std;

int main(){ 
    char ch;
    ch= cin.get();
    int digit = 0, character = 0, space = 0 , alphabets = 0;

    while(ch!='$'){ // write $ at the end of string

    if(ch>='0' and ch <='9'){
        digit++;
    }

    else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
        alphabets++;
      
    }

    else if(ch==' ' or ch=='\n' or ch=='\t'){
        space++;
    }

    else{
        character++;

    }

    ch = cin.get();
   
}

cout<< "Number of digits are : "<<digit<<endl;
cout<<"Number of alphabets are : "<<alphabets<<endl;
cout<<"Number of spaces are : "<<space<<endl;
cout<<"Number of special characters are : "<<character<<endl;

}