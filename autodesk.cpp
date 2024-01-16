#include<iostream>
#include<vector>

using namespace std;
int main(){

    int arr[]  = {25,2,3,57,38,41};

    int n = sizeof(arr)/sizeof(arr[0]);
 vector<int> freq(10, 0);
    for(auto it : arr){
        while(it > 0){
            int rem = it % 10;
            it /= 10;
            freq[rem]++;
        }
    }
    
    int maxi = *max_element(freq.begin(), freq.end());
    vector<int> ans;
    for(int i = 0; i < 10; i++){
        if(freq[i] == maxi) ans.push_back(i);
    }

  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }

 

    }
