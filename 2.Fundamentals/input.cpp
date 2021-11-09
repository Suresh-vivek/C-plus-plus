#include <iostream>
using namespace std;


int main(){
    //Read a array of characters(sentence)
    // using cin.get() method



    // cin method does not read spaces/newline
    char ch;
    //reads the first character
    ch = cin.get(); //this method reads any single character including space/newline from input buffer

    while(ch !='.'){

        cout<<ch;
        //read the updated character
        ch =cin.get();

    }
}