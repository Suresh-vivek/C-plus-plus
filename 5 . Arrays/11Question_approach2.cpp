/*
Question
A sorted array and key is given , find a pair in array whose sum is equal to key

Approach- using binary search
suppose if key = 15 and a[0]= 5 then we have to search 10 is present in array or not

Time Complexity is proportional to  = N* log(N)
*/

#include <iostream>
using namespace std;

bool binary_search(int *a,int n,int key){
   
    int s=0,e=n-1,m;
    

    while(s<=e){
        m = (s+e)/2;
        if(a[m]==key){
            return true;
        }
        else if(a[m]> key){
            e= m-1;
        }
        else{
            s = m+1;
        }
    }
    
   
    return false;


}

int main(){
    cout<<"Enter the number of elements in the array "<<endl;
    int n,a[100],key,s;
    cin>>n;
    
    cout<<"Enter the key "<<endl;
    cin>>key;

    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    
    int m=0;
    for(int i = 0; i <= n-1; i++){
        s = key - a[i];

        if(binary_search(a,n,s)){
            cout<<"Pair is present " <<a[i]<<" "<<s<<endl;
            m++;
        }
        
    }
    if(m==0){
        cout<<"Pair is not present"<<endl;
    }
    


    return 0;
}