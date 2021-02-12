from collections import defaultdict

class Graph:
    def __init__(self):
        self.graph = defaultdict(list)
    def addEdge(self, u, v):
        self.graph[u].append(v)
        self.graph[v].append(u)
    def dfs(self, start, vis, travel):
        travel.append(start)
        vis.add(start)
        for vertex in list(self.graph):
            if vertex not in vis:
                for x in self.graph[start]:
                    if x not in vis:
                        vis.add(x)
                        self.dfs(x, vis, travel)
        
        
g = Graph()
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(2, 3)
vis = set()
travel = []
g.dfs(0, vis, travel)
print(*travel)
