/*
Friend functions and classes

Friend functions are global functions
They can access member of a class upon their objects
A class can be declared as friend on another class
All the functions of friend class can access private and protected members of other class
*/

class your;
class My{
    private: int a;
    protected : int b;
    public:
    int c;
    friend your;
};

class your{
    My m;
    public:
    void fun(){
        m.a=10;
        m.b=12;
        m.c=15;
    }
};

int main(){

}