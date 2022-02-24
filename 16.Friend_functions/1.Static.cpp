/*
Static Members

Static data members are members of a class
Only one instance of static members is created and shared by all objects
They can be accessed directly using class name
Static members functions are functions of a class, they can be called using class name, without
creating object of a class.
• They can access only static data members of a class, they cannot access non-static members
of a class.
*/

#include <iostream>
using namespace std;

class Test{
    public:
    int a;

    static int count;
    Test(){
        a=10;
        count++;
    }
    static int getCount(){
        return count;
    }
};
int Test:: count=0;

int main(){
    
    Test t1,t2;
    cout<<t1.count<<endl;  // 2
    cout<<t2.count<<endl;  //2

    t1.count = 25;
    cout<<t2.count<<endl;   //25
    cout<<Test:: count<<endl;  //25

    cout<<t1.getCount()<<endl; //25
    cout<<Test :: getCount()<<endl;  //25

    return 0;
}