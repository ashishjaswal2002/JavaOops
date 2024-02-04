#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;
int main(){
 
 string s = "sharechat";
 int n = s.length();
 int size =0;
 string ans="";
   if(n%2!=0){
    int size = n-1;
   }
       
       for(int i=0;i<size;i+=2){
           swap(s[i],s[i+1]);
       }
     
     
       
       for(int i=0;i<n;i++){
          ans+='z'-s[i]+'a';
       }

  
       cout<<ans<<"\n";

}