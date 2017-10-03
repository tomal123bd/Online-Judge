/*
  Insert Node at a given position in a linked list
  head can be NULL
  First element in the linked list is at position 0
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    Node *temp,*temp2=NULL,*temp3=NULL;
    int i=0;
    temp=new Node;
    temp->data=data;
    temp->next=NULL;
    temp2=head;
    while (1){
        if (position==0){
            if (head==NULL){
                head=temp;
                return head;
            }
            temp->next=head;
            head=temp;
            return head;
        }
        if (i==position){
            temp3->next=temp;
            temp->next=temp2;
            return head;
        }
        temp3=temp2;
        temp2=temp2->next;
        i++;
    }
}
