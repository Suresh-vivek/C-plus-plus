#include <iostream>
using namespace std;

int main(){

     //primitive datatypes
     //int , float, bool, double , char

     int x = 10;
     float y = 4.76;
     bool weather_is_sunny = true;
     double pi = 3.141578987;
     char ch = 'A';

     //How much memory each is going to occupy
     
     cout<< "Int "<<sizeof(x)<<endl;  //4 bytes
     cout<<"Float " <<sizeof(y) <<endl; //4 bytes
     cout << "bool " <<sizeof(weather_is_sunny)<<endl;  //1 byte
     cout << "double" <<sizeof(pi) << endl;   //8 bytes
     cout<< "char" <<sizeof(ch)<<endl;   //1 byte

}
