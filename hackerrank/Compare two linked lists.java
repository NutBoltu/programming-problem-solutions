/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
int CompareLists(Node headA, Node headB) {
    // This is a "method-only" submission. 
    // You only need to complete this method 
    int isIdentical = 1;
    while(headA !=null || headB !=null){
        if(headA == null || headB == null || headA.data != headB.data){
            isIdentical = 0;
            break;
        }
        headA = headA.next;
        headB = headB.next;
    }
    return isIdentical;
}