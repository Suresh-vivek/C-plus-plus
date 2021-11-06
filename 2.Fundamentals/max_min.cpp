/*
Question: Input n numbers from users and print MINIMUM and MAXIMUM out of them withou using 
an array.


*/

#include <iostream>
#include <climits>
using namespace std;


int main(){
    
    int n;
    cout <<"Enter the Number count"<<endl;
    cin >> n;

    int num;
    int min = INT_MAX, max = INT_MIN;

    while(n>0){
        cin>>num;
        
        //logic
        if(min>num){
            min = num;
        }
        if(max < num){
            max = num;

        }

        n=n-1;
    } 
    cout<< "Minimum number is :" <<min<<endl;
    cout<<"Maximum number is :"<<max<<endl;

}
