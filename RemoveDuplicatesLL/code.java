/*
Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/

Node RemoveDuplicates(Node head) {
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node Head = head;
    Node Temp;
    while (head.next != null){
         if (head.data == head.next.data){
             Temp = head ;
             while (Temp.next !=null && Temp.data == Temp.next.data){
                 Temp = Temp.next;
             }
              if(Temp.next ==null){
                  head.next = null;
                  return Head;}
             head.next = Temp.next ;
         }
       
        
        head = head.next ;
        
        }
    return Head ;

}

