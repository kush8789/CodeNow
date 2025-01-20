def movezeroes(arr, n):
    temp = []

    for i in range(n):
        if arr[i] != 0:
            temp.append(arr[i])

    while len(temp) < n:
        temp.append(0)

    for i in range(n):
        arr[i] = temp[i]
    return arr

n=int(input())
arr=list(map(int,input().split()))
print(movezeroes(arr,n))