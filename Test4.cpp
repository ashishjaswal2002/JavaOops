#include<bits/stdc++.h>
using namespace std;
#define TestCase int t; cin>>t; while(t--)
#define N int n;cin>n;
int main(){
  vector<int> v = {0,1,0,3,12};
  int n = v.size();
  vector<int> v2;
  for(auto x:v){
    if(x>0){
        v2.push_back(x);
    }
  }
  v2.resize(n,0);
  for(auto x:v2){
    cout<<x<<" ";
  }
}