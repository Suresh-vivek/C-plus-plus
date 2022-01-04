#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a[n],b[n],mina,minb;
	cin>>n;
    
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}

	mina= *min_element(a,a+n);
	minb = *min_element(b,b+n);
    int m=0;
    cout<<mina;
    cout<<minb;
	if(mina > minb){
        
        for(int i=0;i<n;i++){
			while(a[i]!=mina){
				a[i]-= b[i];
				m++;
			}
			
         
		




	    }
		cout<<m;
	}
	else{
		cout<<"-1";
	}
}