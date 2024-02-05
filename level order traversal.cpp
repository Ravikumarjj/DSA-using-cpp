
#include <bits/stdc++.h>
using namespace std;
    // Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };



vector<int> levelOrder(TreeNode<int> * root){
    // Write your code here.
    vector<int> ans; 
        
        if(root == NULL) 
            return ans; 
            
        queue<TreeNode<int>*> q; 
        q.push(root); 
        
        while(!q.empty()) {
           
            TreeNode<int> *temp = q.front(); 
            q.pop(); 
            
            if(temp->left != NULL) 
                q.push(temp->left); 
            if(temp->right != NULL) 
                q.push(temp->right); 
                
            ans.push_back(temp->data); 
        }
        return ans;
}
