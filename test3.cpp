#include<bits/stdc++.h>
using namespace std;

void printSubsequence(int i,vector<int>& ans,int arr[],int& n){
 
  
  if(i==n){
    for(auto& a : ans){
      cout<<a<<" ";
    }
    if(ans.size()==0){
      cout<<"{}";
    }
    cout<<endl;

    return;
  }

  ans.push_back(arr[i]);

  printSubsequence(i+1,ans,arr,n);
  ans.pop_back();
  printSubsequence(i+1,ans,arr,n);



}
int main(){
 
 
 int arr[] ={3,1,2};
 int n = 3;
 vector<int> ans;
printSubsequence(0,ans,arr,n);






}