#include<bits/stdc++.h>
using namespace std;
int main(){
 
  //  string arr[] ={"abcdefghijklmnopqrstuvwxyz"};
  //    int n = sizeof(arr)/sizeof(arr[0]);
  //    vector<int> v;
  //  for(int i=0;i<n;i++){
       
  //      v.push_back(arr[i].length());
    

  //  }

  //  sort(v.begin(),v.end());

  //  for(int i=0;i<v.size();i++){

  //   cout<<" "<<v[i];
     

  //  }
  
#include <iostream>
#include <string>


    std::string s = "Hello";

    vector<string> v;
    v.push_back("Hello");

    // Using the subscript operator []
    for (std::size_t i = 0; i < s.length(); ++i) {
        char character = s[i];
        std::cout << "Character at position " << i << ": " << character << std::endl;
    }

    // Using the at() function
    for (std::size_t i = 0; i < s.length(); ++i) {
        char character = s.at(i);
        std::cout << "Character at position " << i << ": " << character << std::endl;
    }


  


}