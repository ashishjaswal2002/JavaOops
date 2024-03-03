#include<bits/stdc++.h>

using namespace std;
int main(){
   
   ios_base::sync_with_stdio(false); // Fast I/O
    cin.tie(NULL); 
  long long n,t;
  cin>>n>>t;
  vector<long long> v(n,0);
 
  while(t-->0){
    
    long long i, score;
    cin>>i>>score;
    v[i-1] = v[i-1]+score;
   
  
      set<long long> s;
     for(auto x:v){
      s.insert(x);
     }
     
     long long count = s.size();
     cout<<count<<"\n";

        
    }
    
    
  }
