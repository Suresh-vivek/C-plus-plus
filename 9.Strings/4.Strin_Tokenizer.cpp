#include <iostream>
#include <cstring>
using namespace std;

char *mystrtok(char *str, char delim){
    // it accepts a string and a single character which act as a delim

    static char*input = NULL;
    if(str != NULL){
        // we are making the first call
        input = str;
    } 
    
    //base case
    if(input == NULL){
        return NULL;
    }

    // start extracting each token

    char *output = new char[strlen(str)+1];

    int i=0;
    for(; input[i] != NULL;i++){
        if(input[i] != delim){
            output[i] = input[i];
        }
        else{
            output[i] = '\0'; // NULL character
            input = input +i +1;
            return output;
        }
    }
    //corner case
    output[i] = '\0';
    input = NULL;
    return output;

}

int main(){
    char s[100]= "Today is a rainy day";

    char *ptr = mystrtok(s,' ');
    cout<<ptr<<endl; // it will return first token

    while(ptr!= NULL){
        ptr = mystrtok(NULL,' ');
        cout << ptr<<endl;
    }
    cout<<endl;



}