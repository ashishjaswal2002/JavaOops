#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;

vector<int> sol(vector<int>&v,vector<int>&v2){

   vector<int> ans;
   for(auto x:v){
      ans.push_back(x);
   }

   for(auto x:v2){
      ans.push_back(x);
   }

   sort(ans.begin(),ans.end());

   for(int i=0;i<ans.size()-1;i++){
      if(ans[i]==ans[i+1]){
        ans.erase(ans.begin()+i);
        i--;
        }
   }
   return ans;
}

int main(){
 
   vector<int> v = {1,2,3,4,5,5};
   vector<int> v2 = {2,3,4,6};

   vector<int> ans = {sol(v,v2)}; 


    for(auto x:ans){
      cout<<x<<" ";
    }


}