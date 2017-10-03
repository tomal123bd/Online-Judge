/*
  Delete Node at a given position in a linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node *temp,*temp2;
    int i=0;
    temp=head;
    while (1){
        if (position==0){
            head=temp->next;
            return head;
        }
        if (i==position){
            temp2->next=temp->next;
            return head;
        }
        temp2=temp;
        temp=temp->next;
        i++;
    }
}
