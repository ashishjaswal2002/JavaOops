#include<bits/stdc++.h>
using namespace std;

void printAuto(int n){
  
  if(n==0) return;
  
  cout<<n<<" ";
   printAuto(n-1);
  

}
int main(){
 
   int n = 5;
 
    
    printAuto(n);
   
}