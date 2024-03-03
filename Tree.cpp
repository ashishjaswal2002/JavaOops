 #include <bits/stdc++.h>
 using namespace std;
class Tree {
    public:
    Tree* left;
    Tree* right;
    char val;

    Tree(char d) {
        val= d;
        left = NULL;
        right = NULL;
    }
};

    
    





 



 int main(){

    Tree* root   = new Tree(11);
    root->left = new Tree(18);
    root->left->left = new Tree(3);
    root->left->right  = new Tree(7);
     root->right =new Tree(14);
     root->left->right->left = new Tree(18);
     root->left->right->left->left = new Tree(6);
 
   
    

 }

 //
 /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

        
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

   
   