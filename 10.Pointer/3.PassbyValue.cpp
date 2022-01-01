#include <iostream>
using namespace std;
 
//Pass by value
void increment(int a){
    a +=1;
    cout<<"Inside incement "<<a<<endl;
     

}
int main(){
    int a=10;
    increment(a);
    cout<<"Main increment "<<a<<endl;
}