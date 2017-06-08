/*
Detect a cycle in a linked list. Note that the head pointer may be 'null' if the list is empty.

A Node is defined as: 
    class Node {
        int data;
        Node next;
    }
*/

boolean hasCycle(Node head) {
    Node Head = head;
    int i = 0;
  int a[] = new int [100];
    while (head.next!=null){
        a[i] = &head;
        head = head.next;
        i++;
    } 
    head = Head;
    
    while (head.next != null){
        for(i=0;i<a.lengh();i++){
            if(head.next == a[i]){
                return true;
            }
        }
        head = head.next;
    }

}

