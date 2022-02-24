#include <iostream>
using namespace std;

class Student{
    public:
    int roll;
    string name;
    static int addNo;

    Student(string n){
        name = n;
        addNo++;
        roll= addNo;
    }

    void Display(){
        cout<<"Name : "<<name<<endl<<"Roll No: "<<roll<<endl;
    }


};
int Student:: addNo=0;

int main(){
    Student s1("Vivek");
    Student s2("Aman");
    Student s3("Vikas");
    
    s1.Display();
    s2.Display();
    s3.Display();
}