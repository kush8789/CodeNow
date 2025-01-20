def maxones(arr, n):
    count=0
    max_count=0
    for i in range(n):
        if arr[i]==0:
            count=0
        else:
            count+=1
            max_count=max(max_count,count)
    return max_count

if __name__ == "__main__":
    n=int(input())
    arr=list(map(int, input().split()))
    print(maxones(arr, n))