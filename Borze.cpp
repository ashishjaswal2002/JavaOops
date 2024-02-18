#include <bits/stdc++.h>
#define TestCase \
  int t;         \
  cin >> t;      \
  while (t--)
using namespace std;
int main()
{

  vector<int> arr = {1};
  int k = 0;

  unordered_map<int, int> mp;

  for (auto x : arr)
  {
    mp[x]++;
  }

  vector<int> v;

  for (auto x : mp)
  {

    v.push_back(x.second);
    //{1 4},{1 2},{2 1},{3 3}
  }

  sort(v.begin(), v.end());
  for(int i=0;i<v.size();i++)
  {
     k-=v[i];

     if(k<0){
      return v.size()-i;
     }
  }
 
}