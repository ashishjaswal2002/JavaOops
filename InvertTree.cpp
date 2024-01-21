#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node* left;
    Node* right;
    int data ;

    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
    

};

void printTree(Node* root){
  
 queue<Node*> q;
 q.push(root);

   
  while(!q.empty()){
    int size = q.size();

    for(int i = 0; i < size; i++){
        root = q.front();
        q.pop();

        cout<<root->data<<" ";

        if(root->left != NULL){
            q.push(root->left);
        }
        if(root->right != NULL){
            q.push(root->right);
        }


    }
    cout<<endl;
  }
//  if(root==NULL) return;
//  cout<<root->data<<" ";
//  printTree(root->left);
//  printTree(root->right);



}

 Node* invertTree(Node* root){
    if(root==NULL) return NULL;
    
    invertTree(root->left);
    invertTree(root->right);
    swap(root->left,root->right);
    return root;
 }

int main(){

    Node* root = new Node(4);
    root-> left = new Node(2);

    root->right = new Node(7);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(9);
    invertTree(root);
    printTree(root);


}