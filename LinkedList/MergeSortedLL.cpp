/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    if (headA == NULL && headB == NULL) {
        return NULL;
    }

    if (headA == NULL) {
        return headB;
    }

    if (headB == NULL) {
        return headA;
    }

    // Ensure that list A starts with the smaller number
    if (headA->data > headB->data) {
        Node *tmp = headB;
        headB = headA;
        headA = tmp;
    }

    Node *listHead = headA;

    while (headB) {
        // Advance through nodes in list A until the next node
        // has data bigger than data at current node of list B
        while (headA->next != NULL &&
               headB->data > headA->next->data) {
            headA = headA->next;
        }

        // Insert current node in list B into list A
        Node* nextB = headB->next;
        headB->next = headA->next;
        headA->next = headB;
        headB = nextB;
    }

    return listHead;
}

