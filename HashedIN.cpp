#include <iostream>
using namespace std;


bool solution(string &moves) {
    
    int up =0;
    int down =0;
    int right =0;
    int left =0;

   for(int i=0;i<moves.length();i++){
       if(moves[i]=='^'){
         up++;
       }
       if(moves[i]=='v'){
           down++;
       }
       if(moves[i]=='>'){
           right++;
       }
       if(moves[i]=='<'){
           left++;
       }
   }
    
    int check = up+down+right+left;
    if(check%2!=0){
        return false;

    }
    return true;
}
int main(){

    string s;
    cin>>s;
    cout<<solution(s)<<" ";
}