#include <bits/stdc++.h>
using namespace std;

int main(){ 
    
    return 0;
}
class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};


Node* createTree(vector<int>&arr){
    // Write your code here.
     Node*root=new Node(arr[0]);

    root->left=new Node(arr[1]);

    root->right=new Node(arr[2]);

      root->left->left = new Node(arr[3]);

 

    root->left->right = new Node(arr[4]);

 

    root->right->left = new Node(arr[5]);

 

    root->right->right= new Node(arr[6]);

    return root;
}