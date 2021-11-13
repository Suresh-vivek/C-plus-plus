#include <iostream>
#include <climits>
using namespace std;

int main(){
    int min,max,n;
    min = INT_MAX;
    max = INT_MIN;

    cout<< "Enter the number of element in Array "<<endl;
    cin>>n;
    int a[100];

    for(int i = 0; i<n;i++){
        cin>>a[i];
    }

    //To find min and max element in array
    for(int i = 0 ;i<n;i++){
        if(a[i]<min){
            min = a[i];
        }
        if(a[i]>max){
            max = a[i];
        }
    }
    cout<<max << " "<<min<<endl;
}