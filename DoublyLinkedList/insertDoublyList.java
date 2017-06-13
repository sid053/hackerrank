/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
     Node prev;
  }
*/

Node SortedInsert(Node head,int data) {
    
 Node newNode = new Node();
newNode.data = data;

if(head == null || head.data >= data){
    newNode.next = head;
    newNode.prev = null;
    return newNode;
}

Node current = head;
Node prev = null;
while(current != null && current.data < data){
    prev = current;
    current = current.next;
}

Node next = current;
newNode.prev = prev;
newNode.next = next;
prev.next = newNode;
if(next != null){
    next.prev = newNode;
}

return head;
}

