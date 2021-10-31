#include <iostream>
using namespace std;

int main(){

//Declaring variables
 int p,r,t;
 float si;

 // Assigning values to them

p = 10;
r = 25;
t = 1;

//Every line in C++ should terminate with semi-colon

si = p*r*t/100;
//This will result in 2 instead of 2.5 because

/*
Typecasting -> Implicit
integer/integer = integer
integer/float = float
float/integer = float
float/float = float

si is the first case
*/
float si1 = p*r*t/100.0; //100.0 is a float

int p1,r1,t1;

cin>>p1>>r1>>t1;
float si2= p1*r1*t1/100.0;

cout<< si <<" " <<si1 <<endl;
cout<< "Simple Interest is : "<<si2 <<endl;

}