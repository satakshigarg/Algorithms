from collections import defaultdict

class Graph:
    def __init__(self):
        self.graph = defaultdict(list)
    def addEdge(self, u, v):
        self.graph[u].append(v)
        self.graph[v].append(u)
    def bfs(self, start, n):
        vis = [0]*(n+1)
        travel = []
        vis[start] = 1
        queue = []
        queue.append(start)
        while queue:
            start = queue.pop()
            travel.append(start)
            for x in self.graph[start]:
                if vis[x] == 0:
                    vis[x] = 1
                    queue.append(x)
        return travel
        
        
g = Graph()
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(2, 3)
print(*(g.bfs(0, 4)))
