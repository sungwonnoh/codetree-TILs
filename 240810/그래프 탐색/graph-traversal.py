n, m = map(int, input().split())
edges = []
for _ in range(m):
    u, v = map(int, input().split())
    edges.append((u, v))

def dfs(graph, start, visited):
    visited[start] = True
    count = 0
    
    for neighbor in graph[start]:
        if not visited[neighbor]:
            count += 1
            count += dfs(graph, neighbor, visited)
    
    return count

def count_reachable_nodes(n, edges):
    graph = {i: [] for i in range(1, n+1)}

    for u, v in edges:
        graph[u].append(v)
        graph[v].append(u)
    
    visited = [False] * (n + 1)
    reachable_count = dfs(graph, 1, visited)
    return reachable_count

result = count_reachable_nodes(n, edges)
print(result)