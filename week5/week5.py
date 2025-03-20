from collections import deque

N,M = [int(i) for i in input().split() ]
G = [[] for _ in range(N)]

for _ in range (M):
    i,j = [int(i) for i in input().split()]
    G[j].append(i)

def topo_sort(G):
    N = len(G)
    q = deque()
    in_degree = [0] * N
    order = []
    index = 0
    
    for i in range(N):
        for j in G[i]:
            in_degree[j] += 1
    
    for i in range(N):
        if in_degree[i] == 0:
            q.append(i)
    while q:
        current = q.popleft()
        
        for j in G[current]:
            in_degree[j] -= 1
            if in_degree[j] == 0:
                q.append(j)
        
        order.append(current)

def longest_distance_dag(G,order):
    N = len(G)
    distance = [1] * N
    for i in order:
        for j in G[i]:
            distance[j] = max(distance[i] + 1, distance[j])
            
    
    return max(distance)

print(longest_distance_dag(G,topo_sort(G)))
        