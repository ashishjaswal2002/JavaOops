#include<bits/stdc++.h>
#define TestCase int t; cin>>t; while(t--)
using namespace std;

class TreeNode{
 public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
       this->data = data;

     left = NULL;
     right = NULL;
    }

};


int main(){

   TreeNode* root = new TreeNode(1);
   TreeNode* left = new TreeNode(2);
   TreeNode* right = new TreeNode(3);

}