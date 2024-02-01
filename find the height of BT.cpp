#include<bits/stdc++.h>
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

int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.
     if(root==NULL) return 0;

    int left=heightOfBinaryTree(root->left);

    int right=heightOfBinaryTree(root->right);

    return max(left,right)+1;
}