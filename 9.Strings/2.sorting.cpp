
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool compare(string a, string b){
    if(a.length() == b.length()){
        return a<b;
    }
    return a.length() > b.length();

}
int main(){
    int n;
    cout<<"Enter the number of strings"<<endl;
    cin>>n;
    cin.get(); // for next line character

    string s[100];

    for(int i =0; i< n;i++){
        getline(cin,s[i]);
    }
    
    //sorting -> maximum length at lop , if size equals lexographically small comes first
    sort(s,s+n,compare); // compare -> it's a comparator

    // output
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }

    return 0;
}