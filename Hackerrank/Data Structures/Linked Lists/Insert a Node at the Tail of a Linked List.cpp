/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node *temp=NULL,*temp2=NULL,*pre=NULL;
    temp2=new Node;
    if (head==NULL){
        temp2->data=data;
        temp2->next=NULL;
        head=temp2;
        return head;
    }
    else {
        temp=head;
        while(1){
            if (temp==NULL){
                temp2->data=data;
                temp2->next=NULL;
                pre->next=temp2;
                temp=temp2;
                return head;
            }
            pre=temp;
            temp=temp->next;
        }
    }
}
