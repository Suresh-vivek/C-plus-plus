#include <iostream>
using namespace std;

int main(){
    
    // Pointer to an integer
    int * p;

    //pointer to any array of 5
    int (*ptr)[5];
    int a[5];
    
    // Pointer to 0th element of array
    p= a;

    // Pointer to whole array
    ptr = &a;

    cout << "p = " <<p <<" ptr = "<<ptr<<endl;
    p++;
    ptr++; // same as a+1

    cout << "p = " <<p <<" ptr = "<<ptr<<endl;

    cout << "sizeof(p) = "<< sizeof(p) <<
            ", sizeof(*p) = " << sizeof(*p) << endl;
    cout << "sizeof(ptr) = "<< sizeof(ptr) <<
        ", sizeof(*ptr) = " << sizeof(*ptr) << endl;

    /*
    The base type of p is int , while base type of ptr is "an array of 5 integers"
    
    */
     cout<<"2D Array"<<endl;
    // 2D array
    int x[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    cout<<x<<endl; // return address of 1
    cout<<x+1<<endl; // return address of 5
    cout<<*x<<endl;  // return address of 1
    cout<< *(x+1)<<endl; // return address of 5
    cout<< *(x+1) +1<<endl; // return address of 6
    cout<< *(*(x+1)+1)<<endl; // return 6
    
    cout<<endl;

    // Input and output of 2d array using pointer

    int row,col,*p1;
    cout<<"Enter the number of rows "<<endl;
    cin>>row;
    cout<<"Enter the number of columns "<<endl;
    cin>>col;
     
    int v[row][col];

    //input
    for(p1 = &v[0][0];p1 <= &v[row -1][col -1];p1++){
        cin>> *p1;
    }

    //output
    for(p1 = &v[0][0];p1 <= &v[row -1][col -1];p1++){
        cout<< *p1 <<" ";
    }
    cout<<endl;

    return 0;
}