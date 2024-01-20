#include<bits/stdc++.h>
using namespace std;

void reverseArray(int i,vector<int>& arr){
   
  if(i==arr.size()/2) return;

  
    swap(arr[i],arr[arr.size()-i-1]);
    i++;
    reverseArray(i,arr);

  
  

}
int main(){
 

 int n;
 cin>>n;

 vector<int> arr(n);

 for(int i=0; i<n; i++){
   cin>>arr[i];
 }

 reverseArray(0,arr);

for(int i=0; i<n; i++){
   cout<<arr[i]<<" ";
 }

    
  
   
}