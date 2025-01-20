def leftrotate(arr, n):
    temp=[0]*n
    for i in range(1,n):
        temp[i-1]=arr[i]
    temp[n-1]=arr[0]
    for i in range(0,n):
        print(temp[i], end=" ")
    print()
    
if __name__ == '__main__':
    n=int(input())
    arr=list(map(int, input().split()))
    leftrotate(arr, n)