def reversePrint(head):
    arr=list()
    curr=head
    if (head == None):
        return
    else:
        while(True):
            arr.append(curr.data)
            if(curr.next==None):
                break
            else:
                curr=curr.next
    arr=arr[::-1]
    x="\n".join(str(e) for e in arr)
    print(x)



