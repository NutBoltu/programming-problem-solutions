/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
Node Insert(Node head,int data) {
// This is a "method-only" submission. 
// You only need to complete this method.
    Node it = head;
    while(it.next !=null) it = it.next;
    Node n = new Node();
    n.data = data;
    n.next = null;
    it.next = n;
    return head;
}