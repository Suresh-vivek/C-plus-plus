#include <iostream>
using namespace std;

class outer{

    public:
    
    void fun(){
        i.display();

    }
    class Inner{
        public:

        void display(){
            cout<<"Display Of inner "<<endl;
        }
    };
    Inner i;
};

int main(){

    outer :: Inner a;


}