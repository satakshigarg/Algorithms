from collections import defaultdict

class Graph:
    def __init__(self):
        self.graph = defaultdict(list)
    def addEdge(self, u, v):
        self.graph[u].append(v)
    
    def isCyclicUtil(self, vis, curr):
        if vis[curr] == True:
            return True
        vis[curr] = True
        flag = False
        for x in self.graph[curr]:
            flag = self.isCyclicUtil(vis, x)
            if flag == True:
                return True
        vis[curr] = False
        return False
        
    def isCyclic(self, start, n):
        vis = [False]*n
        flag = False
        for i in range(n):
            vis[start] = True
            for x in self.graph[start]:
                flag = self.isCyclicUtil(vis, x)
                if flag == True:
                    return True
            vis[start] = False
        return False
        
        
g = Graph()
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(2, 3)
g.addEdge(3, 1)
from collections import defaultdict

class Graph:
    def __init__(self):
        self.graph = defaultdict(list)
    def addEdge(self, u, v):
        self.graph[u].append(v)
        
    def isCyclicUtil(self, vis, start):
        if vis[start] == 1:
            return True
        vis[start] = 1
        flag = False
        for x in self.graph[start]:
            flag = self.isCyclicUtil(vis, x)
            if flag == True:
                return True
        vis[start] = 0
        return False
            
    def isCyclic(self, start, n):
        vis = [0] * (n)
        flag = False
        for i in range(n):
            vis[i] = 1
            for x in self.graph[i]:
                flag = self.isCyclicUtil(vis, x)
                if flag == True:
                    return True
            vis[i] = 0
        return False
        
        
g = Graph()
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(2, 3)
g.addEdge(3, 1)
g.addEdge(1, 0)
print(g.isCyclic(0, 4))

print(g.isCyclic(0, 4))
