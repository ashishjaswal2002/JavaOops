#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
#define N int n;cin>n;
using namespace std;
int main(){
 
string s = "ac";
 string str = "abcc";
    int freq[3] = {0};

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == 'a') {
            freq[0]++;
        } else if (str[i] == 'b') {
            freq[1]++;
        } else if (str[i] == 'c') {
            freq[2]++;
        }
    }
    
    

}