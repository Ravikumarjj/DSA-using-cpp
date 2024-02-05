//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
/* structure for a Node */
struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
  
};


// } Driver Code Ends
/* structure for a node */
/*
struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
  
};
 */
 
// This function should return head of
// the modified list
class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       //Your code here
       if(head==NULL){
           Node* newNode = new Node(data);
           newNode->next=newNode;
           return newNode;
       }
       if(head->next==NULL){
           Node * temp=new Node(data);
           head->next=temp;
               temp->next=head;
           if(head->data>=temp->data){
               return temp;
           }
           else{
               return head;
           }
           
       }
       
       if(head->data>= data){
           Node * temp=new Node(data);
           Node * prev=head;
           while(prev->next!=head){
               prev=prev->next;
           }
           temp->next=head;
           prev->next=temp;
           return temp;
       }
       Node* next=head->next;
       Node* curr=head;
       int flag=0;
       while(next!=head){
           if(data>=curr->data && data<=next->data){
               Node* temp=new Node(data);
               temp->next=next;
               curr->next=temp;
               flag=1;
               break;
           }
           //Node* prev=next->next;
           curr=next;
           next=next->next;
       }
       if(flag==1){
       return head;
       }
      // cout<<curr->data;
       if(curr->data <=data){
           Node* temp=new Node(data);
           curr->next=temp;
           temp->next=head;
           return head;
       }
    }
};

//{ Driver Code Starts.

/* Function to print Nodes in a given linked list */
void printList(struct Node *start)
{
  struct Node *temp;

  if(start != NULL)
  {
    temp = start;
    do { printf("%d ", temp->data);
      temp = temp->next;
    } while(temp != start);
    printf("\n");
  }
}
/* Driver program to test above functions */
int main()
{
int t,n,x;
scanf("%d",&t);
int arr;
  while(t--){
  scanf("%d",&n);
  int list_size, i;
  
  /* start with empty linked list */
  struct Node *start = NULL;
  struct Node *temp,*r;
  
  
    /* Create linked list from the array arr[].
    Created linked list will be 1->2->11->56->12 */
    if(n>0){
      scanf("%d",&arr);
    
    temp = new Node(arr);
    start=temp;
    r=start;
    }
    for (i = 0; i<n-1; i++)
    {
        scanf("%d",&arr);
        temp = new Node(arr);
        r->next=temp;
        r=r->next;
    }
    
    if(n>0)
    temp->next=start;
 
    scanf("%d",&x);
    Solution ob;
    start = ob.sortedInsert(start,x);
    printList(start);
    r=start;
    while(r!=start->next)
    {

      temp=start;
      start=start->next;
      free(temp);
    }
    free(start);
}
  return 0;
}

// } Driver Code Ends