class UnionFind:
    def __init__(self, n):
        self.data = []
        self.count = []
        for i in range(n):
            self.data.append(i)
            self.count.append(1)

    def union(self, a, b):
        ra = self._get_root(a)
        rb = self._get_root(b)
        if ra == rb:
            return
        if self.count[ra] > self.count[rb]:
            self.count[ra] += self.count[rb]
            self.data[rb] = ra
        else:
            self.count[rb] += self.count[ra]
            self.data[ra] = rb

    def _get_root(self, n):
        while self.data[n] != n:
            n = self.data[n]
        return n

    def size(self, n):
        return self.count[self._get_root(n)]

n, q = map(int, input().strip().split())
u = UnionFind(n)
for i in range(q):
    query = list(map(str, input().split()))
    key = query[0]
    del query[0]
    params = list(map(int, query))
    if key == 'Q':
        print(u.size(int(params[0])-1))
    elif key == 'M':
        u.union(int(params[0])-1, int(params[1])-1)
