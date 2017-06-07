int GetNode(Node head,int n) {
     // This is a "method-only" submission. 
     // You only need to complete this method. 
  Node H = head;
  int i = 0 ;
   while (i!=n){
       
     H = H.next ;
       i++;
   }
    
  while (H.next !=null)
      {
      head = head.next;
      H = H.next;
  }
    return head.data;
      

}
