#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;

void sol(){

    
}
int main(){
 
  vector<int> v = {100,560,23,19,53,20};

  //2 4 4 4 5 5 

   sort(v.begin(),v.end());

 int low =0,high = v.size()-1;

  while(low<=high){
     
      cout<<v[high]<<" "<<v[low]<<"\n";

      low++;
      high--; 
  }

}