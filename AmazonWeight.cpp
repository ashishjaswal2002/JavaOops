#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin>>n;

  vector<int> v;
  for(int i=0; i<n; i++){
    int num;
    cin>>num;
    v.push_back(num);
  }

  //3 2 1
  

  int maxi = *max_element(v.begin(), v.end());
  int mini = *min_element(v.begin(), v.end());
  // 2  3  1
   
   int distMini =0;
   for(int i=0;i<v.size();i++){
      if(v[i]==mini){
        break;
      }
      distMini++;
   }
   int distMax = 0;
   for(int i=v.size()-1;i>=0;i--){
    if(v[i]==maxi){
        break;
    }
    distMax++;
   }

   int totalMoves = distMini+distMax;
  cout<<totalMoves<<" ";
return 0;

}