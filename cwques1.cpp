//add digits of number thru recursion
#include<iostream>
#include<vector>
using namespace std;

int digSum(int dig){
    //1234
    //4
    static int sum=0;
    if(dig<=0) return sum;
    int temp=dig%10;
    dig=dig-temp;
    dig=dig/10;
    sum+=temp;
    return digSum(dig);

}

int main(){
    cout<<digSum(1234);
return 0;
}
