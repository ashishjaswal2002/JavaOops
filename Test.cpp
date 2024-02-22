#include <bits/stdc++.h>

using namespace std;




int main() {

  vector<vector<int>> v = {{1, 2}};

  set<int> ans;

  unordered_map<int,int> mp;

  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < 1; j++) {
    ans.insert(v[i][j]);
    }
  }

    int townJudge= -1;

  cout<<v.size();
  int n = v.size();
  int m =v[0].size();

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      mp[v[i][j]]++;
    }
  }

  for(int i=0;i<v.size();i++){

     for(int j=1;j<=1;j++){

        if(ans.find(v[i][j])==ans.end()){
           
           if(mp[v[i][j]]>1){
            townJudge = v[i][j];
           }
            
        }


     }
  }


}
