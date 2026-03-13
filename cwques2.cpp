#include<iostream>
#include<vector>
using namespace std;

int fact(int num){
    if(num<=1) return 1;
    return num*fact(num-1);
}

int main(){
    cout<<fact(4);
return 0;
}
