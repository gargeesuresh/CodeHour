    // Complete the deleteNode function below.

    /*
     * For your reference:
     *
     * SinglyLinkedListNode {
     *     int data;
     *     SinglyLinkedListNode next;
     * }
     *
     */
    static SinglyLinkedListNode deleteNode(SinglyLinkedListNode head, int p) {
         if (head == null) 
            return null; 
  
        
    SinglyLinkedListNode temp = head; 
  
        
        if (p == 0) 
        { 
            head = temp.next;   
            return head; 
        } 
  
        
        for (int i=0; temp!=null && i<p-1; i++) 
            temp = temp.next; 
  
       
        if (temp == null || temp.next == null) 
            return null; 
  

  
        temp.next = temp.next.next; 
        return head;

    }
