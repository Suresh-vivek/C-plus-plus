#include <iostream>
using namespace std;

int main(){
    // Write a program to check a number is divisible by 2 , divisible by 3

    int n;
    cin >>n;

    if(n%2==0){
        cout <<n <<" is divisible 2"<<endl;
        cout <<"if Block!"<<endl;
        
    }
    // this if-else block is independent of the above if block
    if(n%3==0){
        cout <<n <<" is divisible 3" <<endl;
        cout <<"if Block!"<<endl;
    
    }

    else{
        cout <<"Not Divisible" <<endl;
        cout << "else Block" <<endl;

    }
    
    // use else if if you want only one of the blocks to be executed

    /*
    Order

    if 
    else if
    else if
    .
    .
    .
    .
    else
    */




    if(n%2==0){
        cout <<n <<" is divisible 2"<<endl;
        cout <<"if Block!"<<endl;
        
    }
    // all other blocks which are below the block executed are skipped

    /*
    suppose n = 6
    then only if block will be executed because it is true and else if block will be skipped
    although 6 is divided by 3

    in this use we have to use and condition in if statement
    */

    else if(n%3==0){
        cout <<n <<" is divisible 3" <<endl;
        cout <<"if Block!"<<endl;
    
    }

    else{
        cout <<"Not Divisible" <<endl;
        cout << "else Block" <<endl;

    }

    
    if(n%2==0 and n%3==0) {
        cout <<n <<" is divisible 2 and 3 both"<<endl;
        cout <<"if Block!"<<endl;
        
    }
    else if(n%2==0){
        cout <<n <<" is divisible 2"<<endl;
        cout <<"if Block!"<<endl;
        
    }
    else if(n%3==0){
        cout <<n <<" is divisible 3" <<endl;
        cout <<"if Block!"<<endl;
    
    }

    else{
        cout <<"Not Divisible" <<endl;
        cout << "else Block" <<endl;

    }

    return 0;

}