/*
  Print elements of a linked list on console
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
  // This is a "method-only" submission.
  struct Node *temp;
    temp=head;
    if (head==NULL) return;
    while (temp!=NULL){
        cout << temp->data << endl;
        temp=temp->next;
    }
}
