
#include <bits/stdc++.h>
using namespace std;
    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

int check(TreeNode<int>* root){
    if(root==NULL) return 0;

    int left=check(root->left);
    if(left==-1)return -1;

    int right=check(root->right);
    if(right==-1)return -1;
    if(abs(left-right)>1)return -1;

    return max(left,right)+1;
}
bool isBalancedBT(TreeNode<int>* root){
    // Write your code here.
    return check(root)!=-1;
}