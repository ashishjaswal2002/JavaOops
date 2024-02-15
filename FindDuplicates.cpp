#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;
int main(){
 
   map<int,int> mp;

   vector<int> v = {2,1,1,2,3,4,5,4};

   // 

   for(auto x:v){
     mp[x]++;
   }

   //2 2
   //1 2
   //3 1
   //4 2
   //5 1


   
   for(auto x:mp){
      
      if(x.second>1){
        cout<<x.first<<" ";
      }
   }
}