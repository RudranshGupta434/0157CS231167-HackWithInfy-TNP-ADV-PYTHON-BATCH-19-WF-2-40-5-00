#include<iostream>
using namespace std;

int candy(vector<int>& arr) {
        vector<long int>candies(arr.size(),1);
    for(int i=0;i<arr.size()-1;i++){
        int count=0;
        if(arr[i+1]>arr[i]) {
            candies[i+1]=candies[i]+1;
        }
        else if(arr[i+1]==arr[i]){
            continue;
        }
        else{
            // count=1;
            int j=i;
            while(j<arr.size()-1 && arr[j+1]<arr[j]) {
                j++;
                count++;
            }
            if(count>=candies[i]){
                while(count>0){
                    candies[i]=count+1;
                    count--;
                    i++;
                }
                i--;
            }
            
        }
    }
    long int sum=0;
    for(auto num:candies){
        sum+=num;
    }
    return sum;
    }

int main(){
  
}
