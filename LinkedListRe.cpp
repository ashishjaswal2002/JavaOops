#include<bits/stdc++.h>
#include <iostream>
using namespace std;
// 1->2->3

struct Node {
    Node* next;
    int data;
    
    Node(int d) {
        this->data = d;
        next = NULL;
    }
};

class Solution {
public:
    Node* rev(Node* head) {
        Node* curr = head;
        Node* prev = NULL;

     
        while (curr != NULL) {
            Node* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        return prev;
    }

   void traverse(Node* head){
    Node* curr =head;

    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
   }

   bool equalORnot(Node* head){
     
     Node* temp = rev(head->next);
   

    Node* curr = head;

     while(curr!=NULL) {
        if(curr->data!=temp->data){

        return false;
        }
    
        curr = curr->next;
        temp = temp->next;
        
     }

     return true;
   }
};

int main() {
    Solution solution;

    Node* head = new Node(1);
    head->next = new Node(2);
   
  
   cout<<solution.equalORnot(head);

  
    return 0;
}
