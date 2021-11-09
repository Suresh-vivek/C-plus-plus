#include <iostream>
using namespace std;

int main(){

    char ch;
    int d;
    int x=0,y=0;
    ch = cin.get();

    while(ch != '\n'){
        

        if(ch=='N' || ch=='n'){
           y++;
        }
         if(ch=='S' || ch=='s'){
            y--;
        }
         if(ch=='E' || ch=='e'){
            x++;
        }
        if(ch=='W' || ch=='w'){
            x--;
        }
        
        ch =cin.get();
    }

    if(x>0){
        cout<< x <<" East"<<endl;
    }
    if(x<0){
        cout << -x << " West"<<endl;
    }

    if(y>0){
        cout<< y <<" North"<<endl;
    }
    if(y<0){
        cout << -y << " South"<<endl;
    }
    
    if(x==0 or y==0){
        cout<<"Origin"<<endl;
    }

    
}