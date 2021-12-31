#include <iostream>
using namespace std;

int main(){
    int a=1;
    float sum=1;
    for(float i = 1;i<100000;i++){
      sum += 1/i;
    }
    cout<<sum;
}