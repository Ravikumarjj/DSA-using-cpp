//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    struct Node* reverse(Node* head){
        
        Node* prev = NULL;
        Node* curr = head;
        
        while(curr!=NULL){
            Node* temp = curr -> next;
            curr-> next=prev;
            prev= curr;
            curr= temp;
        }
        
        return prev;
    }
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        Node* head = new Node();
        Node* temp = head;
        
        Node* curr1 = node1;
        Node* curr2 = node2;
        
        while(curr1 != NULL && curr2 != NULL){
            if(curr1-> data < curr2 -> data){
                temp-> next = curr1;
                curr1 = curr1-> next;
            }else{
                temp -> next = curr2;
                curr2 = curr2-> next;
            }
            temp = temp-> next;
        }
        
        while(curr1 != NULL){
                temp-> next = curr1;
                curr1 = curr1-> next;
                temp = temp-> next;
        }
        
        while(curr2 != NULL){
                 temp -> next = curr2;
                 curr2 = curr2-> next;
                 temp = temp-> next;
                
        }
        
        return reverse(head-> next);
        
        
    }  
     
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends