#include <bits/stdc++.h>
using namespace std;
//  Following is Binary Tree Node structure:
 class TreeNode
 {
 public:
     int data;
     TreeNode *left, *right;
     TreeNode() : data(0), left(NULL), right(NULL) {}
     TreeNode(int x) : data(x), left(NULL), right(NULL) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
 };

vector<int> ans;
void postorder(TreeNode* root,vector<int>& ans){
    if(root==NULL)return;
    postorder(root->left,ans);
    postorder(root->right,ans);
    ans.push_back(root->data);
}
vector<int> postorderTraversal(TreeNode *root)
{
    // Write your code here.
    ans.clear();
    postorder(root,ans);
    return ans;

}