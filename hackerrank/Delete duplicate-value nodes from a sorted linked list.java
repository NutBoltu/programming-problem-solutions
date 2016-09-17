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
    Node it = head;
    while(it.next != null){
        if(it.data == it.next.data){
            it.next = it.next.next;
        }
        else it = it.next;
    }
    return head;
}