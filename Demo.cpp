#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;

int count_combinations(vector<int>& digits,int target){
     
     vector<int> dp(target+1,0);
     dp[0] =1;

     int elementsUsed=0;

     for(int i=0;i<digits.size();i++){
        for(int j= digits[i];j<=target;j++){
            dp[j] +=dp[j-digits[i]];
        }
     }

     for(int i=0;i<digits.size();i++){
       for(int j=digits[i];j<=target;j++){
        dp[j]+=dp[j-digits[i]];
       }

   }

   elementsUsed = dp[target];
   return elementsUsed;
}

int main(){
 
  vector<int> arr  = {1,2,5};
  int amount = 11;


  cout<<count_combinations(arr,amount)<<"";

  



}