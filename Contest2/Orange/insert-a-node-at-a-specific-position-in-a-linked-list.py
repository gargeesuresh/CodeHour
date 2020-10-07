def insertNodeAtPosition(head, data, position):
    node = SinglyLinkedListNode(data)
    curr = head
    # print (node.data)
    if position==0:
        node.next = head
    else:
        position-=1
        while(position):
            curr=curr.next
            position-=1
        node.next=curr.next
        curr.next=node
        
        
    return head
