// Basics of Strings

#include <iostream>
#include <string>
#include <iterator>
using namespace std;

int main(){

    // Initialization of strings
    string s1;
    
    string s2("Hello");

    string s3 = "Hello World";

    //Passing value
    string s4(s3); // It will contain "Hello World"
    string s7 = s2;

    //From character array
    char a[] ={'a','b','c','d','e','\0'};
    string s5(a);

    char b[] ={'a','b','c','d','e','\0'};
    string s6 = b;

    // Output
    cout << s1<<endl;
    cout << s2<<endl;
    cout << s3<<endl;
    cout << s4<<endl;
    cout << s5<<endl;
    cout << s6<<endl;
    cout << s7<<endl;

    // to check if a string is empty
    if(s1.empty()){
        cout<<"S1 string is empty"<<endl;
    }

    //To add characters in a string (append Method)
    s1.append("I Love C++ ");
    cout<<s1<<endl;
    
    s1 += " and python";
    cout <<s1 <<endl;

    // To find length
    cout << s1.length()<<endl;

    //To remove/clear
    s1.clear();
    cout<<s1<<endl;
    cout<<s1.length()<<endl;

    //To compare strings
    string s8 ="Apple";
    string s9 = "Mango";

    cout<<s8.compare(s9)<<endl; // returns integer value , 0 if both are equal
                                // +ve or -ve if not equal
                                //it will result in -12(1-13)
    
    cout<<s9.compare(s8)<<endl; // will return 12
    cout<<s8.compare(s8)<<endl; // will return 0


    // Overloaded operators (< , >)

    if(s9 > s8){
        cout<<"Mango is lexographically greater than Apple"<<endl;
    }

    // To print particular character in string
    cout << s8[1]<<endl; // will print p

    //find a substring
    string s = "I want to have Apple Jiuce";
    int idx = s.find("Apple");
    cout<< idx <<endl;   // it wiill return the index of A in Apple i.e is  15
    cout << s.find("apple")<<endl; // it will return address

    // Remove a word from string
    string word = "Apple";
    int l = word.length();
    cout<<s <<endl;
    s.erase(idx,l+1); // erase from a particular index to l length,+1 fro extra space
    cout<<s<<endl;

    //iterate over each character 
    for(int i=0; i<s8.length();i++){
        cout<<s8[i]<<":";
    }
    cout<<endl;
    // iterartors
    for(auto it= s8.begin();it != s8.end();it++){
        cout<< (*it)<<",";

    }
    cout<<endl;
    // for loop in string
    for(auto c:s8){
        cout<<c<<",";
    }
    cout<<endl;
    
    // auto keyword automaticaaly defines the datatype depends on what values it takes

    //concatenation
    
    string n ="Hi";
    n+= " My name is Vivek";
    cout << n<<endl;
    cout<<n.capacity()<<endl;
    cout<<n.length()<<endl;

    //substring - substr(pos,count) pos- position of starting index, count - no. of characters after pos
         // pos value should not be greater than size of string

    string v = "0123456789abcdefghijklmnopqrstuvwxyz";
    string sub1 = v.substr(10); // will return all characters from 10th index
    cout<<sub1<<endl;

    string sub2 = v.substr(5,3);
    cout<<sub2<<endl;

    //insert - insert(idx , count , char) idx -> starting index , count -> no. of characters to be inserted
                                          // char -> characters to be inserted

    string ex = "xmpl";
    ex.insert(0,1,'E');
    cout<<ex<<endl;

    ex.insert(2,1,'e');
    cout<<ex<<endl;
    
    ex.insert(6,"ar"); // can be string
    cout<<ex<<endl;

    


   
}  


    


