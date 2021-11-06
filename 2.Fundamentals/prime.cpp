#include <iostream>
using namespace std;

int main(){
    
    cout<<"Enter the number"<<endl;
    int n,i;
    cin>>n;
    bool p;

    for(i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<n <<" is not Prime"<<endl;
            break;
        }
        
    }
    
    if(i==n){
        cout<<n <<" is Prime"<<endl;
    }
    
}