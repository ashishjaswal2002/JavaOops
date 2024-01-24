#include<bits/stdc++.h>
using namespace std;


int myXOR(int x, int y)
{
    int res = 0; // Initialize result
     
    // Assuming 32-bit Integer 
    for (int i = 31; i >= 0; i--)                     
    {
       // Find current bits in x and y
       bool b1 = x & (1 << i);
       bool b2 = y & (1 << i);
        
        // If both are 1 then 0 else xor is same as OR
        bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);          
 
        // Update result
        res <<= 1;
        res |= xoredBit;
    }
    return res;
}

int main(){
 
   int t;
   cin>>t;
   while(t-->0){
    int x;
    cin>>x;


  vector<pair<int,int> > v;

    for(int i=0;i<x;i++){

        for(int j=0;j<=x;j++){

            if((myXOR(i,j))==x && (i<=j)){
              v.push_back(make_pair(i,j));
            }
        }
    }

    
     int mini =INT_MAX;    

  
     for(int i=0;i<v.size();i++){
      
        mini = min(mini,v[i].second-v[i].first);

    }
//    cout<<mini<<endl;

  vector<pair<int,int> > v2;
    for(int i=0;i<v.size();i++){
      
      if(mini==(abs(v[i].second-v[i].first))){
         v2.push_back(make_pair(v[i].first,v[i].second));
      }

    }
   

 
 cout<<v2[0].first<<" "<<v2[0].second<<endl;


    
   
}

return 0;


}


