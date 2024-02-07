#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;

void print(int arr[],int& n,int& k){


    int i =0;
    int j=0;
   vector<int> v;
   int negCount =0;

   vector<int> ans;

    while(j<n){
       
      if(arr[j]<0 ){
        v.push_back(arr[j]);
      }

      if(j-i+1<k){j++;}
      else if(j-i+1==k){
       
       if(v.size()==0){
         ans.push_back(0);
       }else
        ans.push_back(v.front());

        if(arr[i]<0)
         
        
        i++;

         

      }
      
    }
  
  for(int i=0;i<ans.size();i++){
    cout<<" "<<ans[i]<<" ";
  }

}

int main(){
 


    int arr[] ={-8,2,3,-6,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int  k =2;
  
   print(arr,n,k);
    



}