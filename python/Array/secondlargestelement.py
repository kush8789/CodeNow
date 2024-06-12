def secondlargest(arr,n):
    if (n<2):
        return -1
    large= float('-inf')
    secondlarge= float('-inf')
    for i in range(n):
        if (arr[i] > large):
            second_large = large
            large = arr[i]
        elif (arr[i] > second_large and arr[i] != large):
            second_large = arr[i]
    return second_large

if __name__ == "__main__":
    n=int(input())
    arr= list(map(int,input().split()))
    secondlargest(arr,n)