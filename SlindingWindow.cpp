#include<bits/stdc++.h>
using namespace std;
#define TestCase int t; cin>>t; while(t--)

int maxSubArray(vector<int>& nums,int& k){

    int sum=0;
    int mx = INT_MIN;
    int i=0;//startOfWindow
    int j=0;//endOfWindow
    while (j<nums.size())
    {
        sum+=nums[j];
        if(j-i+1<k){
            j++;
        }else if(j-i+1==k){

            mx = max(sum,mx);
            sum = sum-nums[i];
            i++;
            j++;
        }
        
    }

    return mx;
    


  }




int main() {
    vector<int> arr = {100, 200, 300, 400};
    int k=2;
    cout << maxSubArray(arr,k);
}