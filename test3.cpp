#include<bits/stdc++.h>
using namespace std;
int main(){
 
   vector<int> v;
   vector<int>v1;

   v.push_back(1);

   v.push_back(2);

   v1.push_back(1);

   v1.push_back(3);
bool areEqual = std::equal(v.begin(), v.end(), v1.begin());

if(areEqual){
    cout<<"YES"<<endl;

}
else{
    cout<<"NO"<<endl;
}

return 0;


}