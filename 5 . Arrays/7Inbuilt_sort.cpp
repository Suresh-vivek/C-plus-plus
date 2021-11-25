#include <iostream>
#include <algorithm>
using namespace std;


// Comparator Function
bool compare(int a , int b){
    return a > b;
}
int main(){
    cout<<"Enter the number of elements in Array :"<<endl;
    int n,a[100];
    cin>>n;

    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    // Inbuilt sort 
    sort(a,a+n); // a is starting index ,a+n is end index(not included)

    for(int i =0; i<=n-1;i++){
        cout<< a[i]<<" ";
    }
    cout<<endl;
    cout<<" Array in descending order"<<endl;
    // calling compare function as a parameter
    sort(a,a+n,compare);
    
    // Array in descending order
    for(int i =0; i<=n-1;i++){
        cout<< a[i]<<" ";
    }
    cout<<endl;

}