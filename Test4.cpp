#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;
int longestLength (vector<string>&s){
     

     set<char> charset;
     int longestLength =0;

     for(int i=0;i<s.size();i++){
         bool flag  =  false;
         string single = s[i];
         for(auto x:single){

          if(charset.find(x)!=charset.end()){
            flag = true;
         } charset.insert(x);
         
     }
      if(flag==false){
         longestLength+=single.size();
      }
      
     }
    
     return longestLength;

}

int main(){
 
 vector<string> s  ={"potato","kayak","banana","racecar"};
   cout<<longestLength(s);



}