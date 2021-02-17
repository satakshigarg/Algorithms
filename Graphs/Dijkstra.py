from collections import defaultdict

class Graph:
    def __init__(self):
        self.graph = defaultdict(list)
        
    def addEdge(self, u, v):
        self.graph[u].append(v)
        self.graph[v].append(u)
        
    def minIndex(self, dis, process, n):
        mini = 1000000000
        ans = 0
        for i in range(n):
            if dis[i] < mini and process[i] == 0:
                mini = dis[i]
                ans = i
        return ans
        
    def dijkstra(self, start, n):
        dis = [1000000000] * (n+1)
        dis[start] = 0
        process = [0] * (n+1)
        for i in range(1, n+1):
            start = self.minIndex(dis, process, n+1)
            process[start] = 1
            curr = dis[start]
            for x in self.graph[start]:
                if process[x] == 0:
                    dis[x] = min(curr + 1, dis[x])  # dis[x] = min(curr + weightOfPath, dis[x])
                    return dis
        
        
g = Graph()
n, m = map(int, input().split())
for i in range(m):
    u, v = map(int, input().split())
    g.addEdge(u, v)

print(g.dijkstra(1, n))
