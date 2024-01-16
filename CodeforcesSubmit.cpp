
#include<bits/stdc++.h>


using namespace std;

int main() {
    
    
      int s1,s2,s3,s4;
      cin>>s1>>s2>>s3>>s4;

      vector<int> v;

      v.push_back(s1);
      v.push_back(s2);
      v.push_back(s3);
      v.push_back(s4);
      sort(v.begin(), v.end());
      int needstoBuy =0;
      for(int i=1;i<v.size();i++) {

         if(v[i]==v[i-1]){
           needstoBuy++;
         }
          
      }


   cout<<needstoBuy<<endl;



}
