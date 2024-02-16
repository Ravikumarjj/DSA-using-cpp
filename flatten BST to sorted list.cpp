//User function Template for C++

/* Node of the binary search tree 
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution
{
private:
    void helper(Node *root,Node * &newNode,Node * &r){
        if(!root) return ;
        
        helper(root->left,newNode,r);
        
        if(!newNode) newNode = root;
        if(r){
            r->right = root;
            r->left = NULL;
        }
        
        r = root;
        helper(root->right,newNode,r);
    }
    
public:
    Node *flattenBST(Node *root)
    {
        Node * newNode = NULL,*r = NULL;
        helper(root,newNode,r);
        r->left = NULL;
        return newNode;
    }
};