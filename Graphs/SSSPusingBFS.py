from collections import defaultdict

class Graph:
    def __init__(self):
        self.graph = defaultdict(list)
        
    def addEdge(self, u, v):
        self.graph[u].append(v)
        self.graph[v].append(u)
    
    def bfs(self, start, n):
        vis = [0] * (n+1)
        dis = [0] * (n+1)
        queue = []
        queue.append(start)
        vis[start] = 1
        while queue:
            start = queue.pop()
            curr = dis[start]
            for x in self.graph[start]:
                if vis[x] == 0:
                    vis[x] = 1
                    queue.append(x)
                    dis[x] = curr + 1
        return dis
        
        
g = Graph()
n, m = map(int, input().split())
for i in range(m):
    u, v = map(int, input().split())
    g.addEdge(u, v)

print(g.bfs(1, n))
