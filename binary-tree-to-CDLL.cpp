#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left=NULL;
    temp->right=NULL;

    return temp;
}

void displayCList(Node *head)
{
    Node *itr =head;
    do{
        cout<<itr->data<<" ";
        itr=itr->right;
    }while(head!=itr);
    cout<<endl;
    itr=itr->left;
    head=itr;
    do
    {
        cout<<itr->data<<" ";
        itr=itr->left;
    } while (head!=itr);
    cout<<endl;
    
}

Node* buildTree(string str)
{
    if(str.length()==0 || str[0]=='N')
         return NULL;

    vector<string> ip;
    istringstream iss(str);
    for(string str; iss>>str; )
        ip.push_back(str);
    
    Node* root = newNode(stoi(ip[0]));

    queue<Node*> queue;
    queue.push(root);

    int i = 1;
    while(!queue.empty() && i<ip.size()){
        Node* currNode =queue.front();
        queue.pop();

        string currVal = ip[i];
        if(currVal != "N"){
            currNode->left = newNode(stoi(currVal));
            queue.push(currNode->left);
        }
        i++;
        if(i>=ip.size())
            break;
        currVal = ip[i];

        if(currVal !="N"){
            currNode->right = newNode(stoi(currVal));
            queue.push(currNode->right);       
        }
             i++;
    }
    return root;
}
class Solution{
    public:
    Node *head=NULL, *prev=NULL;
    Node *bTreeToCList(Node *root)
    {
    //add code here.
    inorder (root); 
    
    //fixng the last node
    head->left=prev; prev->right=head;
    return head;
    }
    void inorder(Node* curr)
    {
        if(curr==NULL)
        return;
        
        inorder (curr->left);
        
        if (head==NULL)
        head=prev=curr;
        
        else{
        prev->right=curr;
        curr->left=prev;
        }
        //before moving right update prev to curr.
        prev=curr;
        inorder (curr->right);
    }
};

int main(){
    int t;
    string tc;
    getline(cin,tc);
    t=stoi(tc);
    while(t--){
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        Solution obj;
        Node *head = obj.bTreeToCList(root);
        displayCList(head);
    }
    return 0;
}