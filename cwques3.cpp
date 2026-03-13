#include<iostream>
#include<vector>
using namespace std;

void revString(string &s){
    static int i=0;
    if(i==s.size()/2) return;
    swap(s[i],s[s.size()-i-1]);
    i++;
    revString(s);
}

void revString2(string &s){
    static int i=0;
    if(i==s.size()) return;
    // swap(s[i],s[s.size()-i-1]);
    // i++;
    
    static string temp="";
    temp+=s[s.size()-i-1];
    i++;

    revString(s);
}

int main(){
    string s="abcd";
    revString(s);
    cout<<s;
return 0;
}
