#include <iostream>
using namespace std;


//Here we are using Brute Force Algorithm

int main(){

    int n,dec;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Enter the nuber of decimal palces"<<endl;
    cin>>dec;

    float ans=0.0;
    float inc =1.0;

    for(int j=0;j <= dec;j++){

        while(ans*ans<=n){
            ans=ans+inc;
        }
        ans=ans-inc;
        inc=inc/10;
    }    
    
     
     cout<<"The Square Root of " <<n <<" is "<<ans <<endl;

    return 0;
}