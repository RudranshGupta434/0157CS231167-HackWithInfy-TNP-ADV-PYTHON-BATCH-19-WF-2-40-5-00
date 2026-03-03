#include<iostream>
#include<vector>
#include<map>
#include<limits.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        map<int,int>freq;
        for(auto num:nums){
            if(freq.find(num)==freq.end()) freq[num]=0;
            freq[num]++;
        }
        int maxi=INT_MIN;
        int max_i;
        for(auto it:freq){
            if(maxi<=it.second){
                maxi=max(maxi,it.second);
                max_i=it.first;
            }   
        }
        return max_i;
    }

int main(){

return 0;
}
