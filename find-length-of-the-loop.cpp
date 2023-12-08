
#include <bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};



//Function to find the length of a loop in the linked list.
int countLength(struct Node *n){
    int count=1;
    Node* temp = n;
    while(temp->next!=n){
        temp=temp->next;
        count++;
        
    }
    return count;
}
int countNodesinLoop(struct Node *head)
{
    // Code here
    if(head==NULL || head->next==NULL){
        return 0;
    }
    Node* slow=head;
    Node* fast=head;
    int count=0;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return countLength(slow);
        }
        
    }
    return 0;
}