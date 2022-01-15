#include <iostream>
using namespace std;

class Student{

    private:
    int roll;
    string name;
    int mathMarks;
    int phyMarks;
    int chemMarks;

    public:
    
    // Constructors
    Student(int r, string n, int m,int p,int c){
        roll = r;
        name = n;
        mathMarks = m;
        phyMarks = p;
        chemMarks = c;


    }

    int total(){
        return mathMarks + phyMarks + chemMarks;
    }

    char grade(){
        float average = total()/3;
        if(average >= 80){
            return 'A';
        }
        else if(average >= 60 and average < 80 ){
            return 'B';
        }
        else if(average >= 40 and average < 60){
            return 'C';
        }
        else{
            return 'D';
        }
    }





};

int main(){

    int roll;
    string name;
    int m,p,c;

    cout<<"Enter the name of Student : ";
    cin>> name;

    cout<<"Enter the roll number : ";
    cin>>roll;

    cout<<endl;

    cout<<"Enter the Marks in Maths, Physics and Chemistry repectively :";
    cin>>m>>p>>c;

    Student s(roll,name,m,p,c);

    cout<<"Total Marks "<<s.total()<<endl;
    cout<<"Grade of the student : "<<s.grade()<<endl;




    return 0;
}