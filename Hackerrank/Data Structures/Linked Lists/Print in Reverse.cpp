/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  // This is a "method-only" submission.
  // You only need to complete this method.
    Node *temp;
    int i=0,j;
    temp=head;
    if (head==NULL) return;
    while (temp!=NULL){
        temp=temp->next;
        i++;
    }
    i--;
    j=i;
    int a[j];
    temp=head;
    while (temp!=NULL){
        a[j]=temp->data;
        temp=temp->next;
        j--;
    }
    for (j=0;j<=i;j++) cout << a[j] << endl;
}
