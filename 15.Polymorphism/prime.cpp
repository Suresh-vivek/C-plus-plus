#include <iostream>
using namespace std;

int main(){
    int i=0,chk=0,j;
    cout<<"prime Numbers between 1 to 100: "<<endl;

    for(i=1;i<=100;i++){

        for(j=2;j<i;j++){
            if(i%j==0){
                chk++;
                break;
            }
        }
        if(chk==0 && i!=1){
            cout<<i<<endl;
        }
        chk=0;
    }
    cout<<endl;
    return 0;
}