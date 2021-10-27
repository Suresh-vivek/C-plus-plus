#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    int a =n;
    int r=0,product=1;

    while(a>0){
        r = a%10;
        product = product*r;
        a=a/10;
        
    }
    
    cout<<"Sum of digit of number "<<n <<" is: "<<product <<endl;    

    return 0;
}