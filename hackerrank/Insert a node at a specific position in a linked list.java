/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
    

Node InsertNth(Node head, int data, int position) {
   // This is a "method-only" submission. 
    // You only need to complete this method. 
    Node n = new Node();
    n.data = data;
    if(head == null) return n;
    if(position ==0){
        n.next =head;
        return n;
    }
    
    Node it = head;
    for(int i =0;i<position-1; i++) it = it.next;
    
    n.next = it.next;
    it.next = n;
    
    return head;
}