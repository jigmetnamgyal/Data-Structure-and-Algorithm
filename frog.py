N = int(input())
h = list(map(int, input().split()))
 
cost = [0]*N
 
cost[0] = 0
cost[1] = cost[0] + abs(h[0] - h[1])
 
for i in range(2, N):
    cost[i] = min(cost[i - 1] + abs(h[i - 1] - h[i]), cost[i - 2] + abs(h[i - 2] - h[i]))
 
print(cost[N - 1])