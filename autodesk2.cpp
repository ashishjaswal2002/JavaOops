
#include<bits/stdc++.h>



using namespace std;

int main() {
    
    vector<int> v1 ;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    int maxi = *max_element(v1.begin(),v1.end());

    cout<<maxi<<" ";

    return 0;
}