
void recursion(BinaryTreeNode<int> *root, int level, vector<int> &res)
    {
        if(root==NULL) return ;
        if(res.size()==level) res.push_back(root->data);
        recursion(root->left, level+1, res);
        recursion(root->right, level+1, res);
    }

vector<int> printLeftView(BinaryTreeNode<int>* root) {
    // Write your code here.
    vector<int> res;
    recursion(root, 0, res);
    return res;
}