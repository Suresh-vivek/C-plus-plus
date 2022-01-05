#include <iostream>
using namespace std;

int main(){
    int b[10];
    cout<<sizeof(b)<<endl; // 40 Bytes
    cout<<b<<endl; // return address of first elememnt of b
    
    int n;
    cin>>n;
    int *a = new int[n]; 

    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i];
    }
    cout<<sizeof(a)<<endl;
    cout<<a<<endl;

    int x[]={1,2,4,8,7};
    cout<<sizeof(x)<<endl;

    int *xptr= x; // xptr stores the address of first element of x
    cout<<xptr<< " "<<*xptr<<endl;

    int *yptr = &x[0]; // yptr stores the address of first element of x same as above statement
    cout<<yptr <<" "<<*yptr<<endl;

    int *zptr = &x[1]; //zptr stores the address of second element of x
    cout<<zptr<<" "<<*zptr<<endl;
     
    cout<<endl;
    cout<<*xptr +3<<endl; // 4
    cout<< x+1<<endl;  // represent address of item next to x i.e is v
    /*
    xptr + 1 = zptr
    xptr + 2 -> represent address of 3rd element of x
    */


    // Length of Array
    int v[5];
    xptr= v;


    cout<<xptr<<endl;
    cout<<&v<<endl;
    cout<<endl;
    cout<<&v+1<<endl;
    cout<<xptr+1<<endl;
    cout<<endl;
    
    cout<< *(&v + 1)<<endl;
    cout<< *(&v + 1) -v <<endl;   

}