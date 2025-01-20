def find_max_difference(a, n):
    mini = float('inf')
    ans = 0
    for i in range(n):
        mini = min(mini, a[i])
        ans = max(ans, a[i] - mini)
    return ans

if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    ans = find_max_difference(a, n)
    print(ans)
