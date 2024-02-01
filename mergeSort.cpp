#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;
int main(){
 
 
 int arr[] = {8,3,4,6,1,5,7,2};
 
 int n = sizeof(arr)/sizeof(arr[0]);

 int mid = n/2;
   vector<int> arr1;
   vector<int> arr2;

   for(int i=0;i<mid;i++){
       arr1.push_back(arr[i]);
   }

   for(int i=0;i<mid;i++){
      cout<<arr1[i]<<" ";
   }

   

 for(int i=mid;i<n;i++){
     arr2.push_back(arr[i]);
 }
   

   for(int i=0;i<mid;i++){
      cout<<arr2[i]<<" ";
   }

   


}