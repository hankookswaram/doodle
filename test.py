N = int(input())
buildings = {i: list(map(int, input().split())) for i in range(1, N+1)}
memo = {}

