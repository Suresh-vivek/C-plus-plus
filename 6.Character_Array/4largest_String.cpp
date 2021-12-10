/*
Question:- Read N , Followed by N strings and find the the largest string ant its length
*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){

    cout<< "Enter the number of Strings "<<endl;
    int n;
    cin>>n;
    
    char a[1000];
    char largest[1000];

    int len = 0, len_largest =0;

    cin.get();

    for(int i=1 ; i<=n; i++){
        cin.getline(a,1000);
        len = strlen(a);

        if(len > len_largest){
            len_largest = len;
            // copying string a to largest
            strcpy(largest,a);
        }


    }
    cout<< largest << " "<< len_largest<<endl;
    return 0;

}