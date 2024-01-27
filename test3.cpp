#include<bits/stdc++.h>
using namespace std;
int printKSubs(int i,int k,int arr[],int sum,int n){

    if(i==n){
        if(k==sum ){
          return 1;
        }
        return 0;
    }

  
    sum+=arr[i];
   
   int l= printKSubs(i+1,k,arr,sum,n);
    sum-=arr[i];
   
 
int r =printKSubs(i+1,k,arr,sum,n);
     
 return l+r;
     

}
int main(){
 
    
    int arr[] = {1,2,1,1};
    int k =2;
    int n =3;
  

   
    cout<<printKSubs(0,k,arr,0,n);

}