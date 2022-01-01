#include <iostream>
#include <cstring>
using namespace std;

/*
char *strtok(char *s, char *delimeters)
returns a token on each subsequent call
on the forst call function should be passed with string arguments for 's'
on subsequent call we should pass the function argument as NULL
*/

int main(){
    char s[100]="Today is a rainy day";
    char S[100]="Today,is, a, rainy day";
    // break the s strsing into different parts about space(" ")

    char *ptr = strtok(s," ");
    cout<<ptr<<endl; // it will return first token

    while(ptr!= NULL){
        ptr = strtok(NULL," ");
        cout << ptr<<endl;
    }
    cout<<endl;

    char *ptr1 = strtok(S,","); // delimeters -> ","
    cout<<ptr1<<endl;

    while(ptr1 != NULL){
        ptr1 = strtok(NULL,",");
        cout << ptr1<<endl;
    }
    cout<<endl;

}