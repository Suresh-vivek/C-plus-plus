#include <iostream>
using namespace std;

int main(){
    
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }

    int island=0;
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            int val = a[i][j];
            int x=i,y=j;
            int l= a[x][y-1];
            int r= a[x][y+1];
            int u=a[x-1][y];
            int d=a[x+1][y];

            if(val==0){
            while((x>=0) && (x<=4) && (y>=0) && (y<=4)){
                if((l==1) and (r==1) and (u==1) and (d==1)){
                    island++;
                    break;
                }
                if(l==0){
                    y--;
                }
                if(r==0){
                    y++;
                }
                if(u==0){
                    x--;
                }
                if(d==0){
                    x++;
                }

            }
            }
        }
    }
    cout<<island;
    
    
    return  0;


}