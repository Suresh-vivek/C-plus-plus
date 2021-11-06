#include <iostream>
using namespace std;

int main(){
    
    cout<<"Enter the number of test cases"<<endl;
    int t;
    cin>>t;

    int x,y;

    while(t>0){
        cin>>x >>y;
        int sum= x + 2*y;

        if(sum%2==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        t=t-1;
    }
    return 0;
}