class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code goes here.
        Node* head = NULL;
        Node* curr = head;
        Node* curr1 = head1;
        Node* curr2 = head2;
        while(curr1 != NULL && curr2 != NULL){
            
            if(curr1->data == curr2->data){
                Node* temp = new Node(curr1->data);
                if(head == NULL){
                    head = temp;
                    curr = head;
                }
                else{
                    curr->next = temp;
                    curr = temp;
                }
                curr1 = curr1->next;
                curr2 = curr2->next;
            }
            else if(curr1->data < curr2->data){
                curr1 = curr1->next;
            }
            else{
                curr2 = curr2->next;
            }
            
        }
        return head;
    }
};