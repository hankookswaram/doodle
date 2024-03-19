from collections import defaultdict

def dfs(n):
    if A[n] != 0:
        return A[n]
    A[n] = dfs(n//P) + dfs(n//Q)
    return A[n]

N, P, Q = map(int, input().split())
A = defaultdict(int)
A[0] = 1
print(dfs(N))
