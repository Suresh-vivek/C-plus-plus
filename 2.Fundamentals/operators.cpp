#include <iostream>
using namespace std;

int main(){
    
    //comma operators
    int a , b ,c;

    //Assignment operators
    a=10;
    b=20;
    c=30;

    //Logical operator
    if(c>a and c>b){
        cout << c << " is Largest"<<endl;
    }
    

    //Ternary Operator
    int x = c%2==0 ? 2:9; //if c is even , this evaluates true and x becomes 2
    cout<<x<<endl;
    c%2==0 ? cout <<"Even" : cout <<"Odd";
    cout<<endl;

    //Bitwise operator
    x = 5;
    int y = 7;
    cout <<"And "<< (x&y) <<endl;
    cout<<"Or "<< (x|y) <<endl;
    cout<<"Xor  "<< (x^y)  <<endl;

    //Shift operators
    x = x<<2;
    cout << x<<endl; //Left shift x becomes 20
    cout << (y>>1) <<endl; //Right shift y becomes 3

    //unary operator
    cout<< (&x)<<endl; //Address of variable x in hexadecimal format
    cout << (-x)<<endl;
    cout << x++ <<endl; // x=20 Post Increment
    cout << ++x <<endl; //x=22
    cout << x-- <<endl; //x=22
    cout<< --x <<endl;  //x=20

     x =99;
    int z = x++; //z =99 ,x=100
    cout <<"Post Incremented z is "<<z <<endl; //z=99
    z = ++x ; //Pre increment x=101,z=101
    cout <<"pre increment z is "<<z <<endl;  //z=101

    // Compound Assignment operator

    
    a+=20;
    cout<<"a after addition "<<a <<endl;
    a-=20;
    cout<<"a after subtraction "<<a <<endl;

    a*=2;
    cout<<"a after Multiplication "<<a <<endl;
    a/=2;
    cout<<"a after Division "<<a <<endl;
    
    a%=2;
    cout<<"a after Modulus "<<a <<endl;
    
    b<<=1;
    cout<<"b after left shift "<<b <<endl;

    b>>=1;
    cout<<"b after right shift "<<b <<endl;
    return 0;


}