#include <iostream>
using namespace std;

int main(){
    //Break - it is used to stop the loop based upon a certain condition

    //Problem Statement - Read a stream of numbers and break when a number is multiple of 7

    int n;

    while(true){
        //This loop has no stopping condition(Infinite loop)
        cin>>n;

        if(n%7==0){
            continue; //Take you out to line number 11, skip line 18 and 20
            // it goes to the start of the loop and skip lines below it that are in loop
        }
        cout<<"No "<<n<<endl;
    }
    cout<<"Came out of the loop"<<endl;
}