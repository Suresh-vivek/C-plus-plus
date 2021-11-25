// Selection sort Algorithm

#include <iostream>
using namespace std;

void Selection_sort(int a[],int n){

    for(int i =0;i<n-1;i++){
        int min_index = i;
        for(int j = i +1;j<=n-1;j++){
            if(a[j]< a[min_index]){
                min_index=j;
            }
        }
        swap(a[i],a[min_index]);


    }
}

int main(){
    cout<<"Enter the number of elements in array "<<endl;
    int n,a[100];
    cin>>n;
    
    for(int i = 0; i<n;i++){
        cin>>a[i];
    }
    Selection_sort(a,n);
    
    cout<<"Sorted Array is "<<endl;
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;

}