#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;
int main(){
 
   TestCase{

     int n;
     cin>>n;
      
      int countMax = 0;
      int countMin =0;
     
      
      if(n==1){
        cout<<1<<" "<<1<<"\n";
      }
      else{

     for(int i=1;i<=n;i+=2){

        countMax++;   
     }
     for(int i=2;i<=n;i+=2){
        countMin++;
     }
     cout<<countMax<<" "<<countMin<<"\n";
      }
   }

   


}