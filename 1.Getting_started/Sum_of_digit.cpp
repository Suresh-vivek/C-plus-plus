#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;

    int a =n;
    int r=0,sum=0;

    while(a>0){
        r = a%10;
        sum = sum + r;
        a=a/10;
        
    }
    
    cout<<"Sum of digit of number "<<n <<" is: "<<sum <<endl;    

    return 0;
}