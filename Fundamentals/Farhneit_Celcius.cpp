/*
Question: Print this table

Fahrenheit      Celcius
0                -17
20               -6
40                4
60                15
.                  .
.                  .
.                  .
300                148


formula:

c = 5/9 * (f-32) 

*/




#include <iostream>
using namespace std;

int main(){

    
    int f=0 ,c;

    while(f <=300){
        c = (5*(f-32))/9 ;
        cout<< f << "  "<<c <<endl;
        f +=20;
        
    }
    return 0;


}