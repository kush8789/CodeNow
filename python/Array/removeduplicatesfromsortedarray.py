def removeDuplicates(arr,n):
    if n<2:
        return n
    # st=set()
    # for i in range(n):
    #     st.add(arr[i])
    # k=len(st)
    # j=0
    # for x in st:
    #     arr[j]=x
    #     j+=1
    # return k
    j=0
    for i in range(1,n):
        if arr[i]!=arr[j]:
            j+=1
            arr[j]=arr[i]
    return j+1
    
if __name__ == '__main__':
    n=int(input())
    arr=list(map(int, input().split()))
    length=removeDuplicates(arr,n)
    for i in range(length):
        print(arr[i], end=" ")
