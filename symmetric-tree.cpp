class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
     bool solve(struct Node* r1, struct Node* r2){
        if((r1==NULL && r2!=NULL) || (r1!=NULL && r2==NULL))
        return false;
        
        if(r1==NULL && r2==NULL)
        return true;
        
        if(r1->data !=r2->data)
        return false;
        
        bool s1= solve(r1->left, r2->right);
        if(s1==false)
        return false;
        
        bool s2= solve(r1->right, r2->left);
        return s2;
    }
    
    bool isSymmetric(struct Node* root)
    {
    if(root==NULL){
        return true;
    }
    return solve(root->left, root->right);
    }
};