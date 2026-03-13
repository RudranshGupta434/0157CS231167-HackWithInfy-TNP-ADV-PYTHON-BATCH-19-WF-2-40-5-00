//palindrome rec
#include<iostream>
#include<vector>
using namespace std;

bool palindrome(string s){
    static int i=0;
    if(i==s.size()/2) return true;
    if(s[i]==s[s.size()-i-1]) {
        i++;
        return palindrome(s);
    }
    else return false;
}

int main(){
    cout<<palindrome("abcda");
return 0;
}
