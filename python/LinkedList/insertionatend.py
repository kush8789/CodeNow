class Node:
    def __init__(self, data, next1=None):
        self.data = data
        self.next = next1
        
class LinkedList:
    def __init__(self):
        self.head = None
        
    def insert(self,data):
        if self.head is None:
            self.head=Node(data)
            return
        
        temp=self.head
        while(temp.next):
            temp=temp.next
            
        temp.next=Node(data)
        
    def printlist(self):
        temp=self.head
        while(temp):
            print(temp.data)
            temp=temp.next
            
            
if __name__=='__main__':
    linked_list=LinkedList()
    n=int(input())
    
    elements=list(map(int,input().split()))
    for data in elements:
        linked_list.insert(data)
        
    x=int(input())
    linked_list.insert(x)
    linked_list.printlist()
        
        