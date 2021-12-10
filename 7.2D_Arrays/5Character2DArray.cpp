/*
2D character Array
*/

#include <iostream>
using namespace std;

int main(){
    //intializing the array
    char a[][8] = {{'a','b','\0'},{'c','d','e','\0'}}; // writing number of column is compulsory
    char b[][10] = {"abc","def","ghi","jkl","mno","pqr"};
    char c[10][10];

    c[0][0]={'A'};
    // output
    cout<<a[0]<<endl; //for the first row
    cout<<a[1]<<endl; //for the second row
    cout<< b[2]<<endl; // ghi
    cout<< b[3]<<endl; //jkl
    cout<<c[0]<<endl; // A
    cout << c[1]<<endl; //Garbage value

    //Input
    cin>>c[2]; //single row
    cin >> c[3][2]; //single element 
    cout<<c<<endl;
}