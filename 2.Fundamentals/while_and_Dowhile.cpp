#include <iostream>
using namespace std;

int main(){
    int cliff_end =10;

    // Initial Condition
    int x =0;

    //Stopping Criteria
    while(x<10){
        //Updating statement
        x+=1;
        cout << "Taking 1 step to reach "<<x <<endl;
    }

    if(x==cliff_end){
        cout << "Reached at the Cliff edge!" <<endl;
    }
    else if(x > cliff_end){
        cout << "Fallibg from the Cliff !!!"<<endl;
    }

    //same question using Do while loop
    // This loop doesn't check the initial condition is true or not
    // It's a exit control loop

    cout <<"Using Do while loop"<<endl;

    x=0;

    do{
        x=x+1;
         cout << "Taking 1 step to reach "<<x <<endl;

    }while(x<cliff_end);

    if(x==cliff_end){
        cout << "Reached at the Cliff edge!" <<endl;
    }
    else if(x > cliff_end){
        cout << "Fallibg from the Cliff !!!"<<endl;
    }
    
    for(x=0;x<10;x=x+1){
        cout << "Taking 1 step to reach "<<x <<endl;
    }

    cout<<x<<endl;

    

    return 0;
}