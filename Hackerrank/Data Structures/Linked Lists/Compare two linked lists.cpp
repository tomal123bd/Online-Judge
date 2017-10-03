/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission.
  // You only need to complete this method
    int i=0,j=0;
    if (headA==NULL && headB==NULL) return 1;
    if (headA==NULL ^ headB==NULL) return 0;
    Node *temp=headA;
    while (temp!=NULL){
        i++;
        temp=temp->next;
    }
    temp=headB;
    while (temp!=NULL){
        j++;
        temp=temp->next;
    }
    if (i!=j) return 0;
    temp=headA;
    while (temp!=NULL){
        if (temp->data!=headB->data) return 0;
        temp=temp->next;
        headB=headB->next;
    }
    return 1;
}
