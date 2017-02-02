import sys
sys.stdin = open("input3.txt", "r")
sys.stdout = open("output4.txt", "w")

def BFS(graph, parent, visited, dist):
    visited[parent] = 1
    queue = list()
    queue.append(parent)
    while len(queue) > 0:
        v = queue[0]
        queue.pop(0)
        for i in graph[v]:
            if not visited[i]:
                visited[i] = 1
                dist[i] = min(dist[v] + 1, dist[i])
                queue.append(i)
    return dist

for tc in range(int(input())):
    home_coordinates = list(map(int, input().split()))
    current_coordinates = list(map(int, input().split()))
    cat_coordinates = set()
    n = int(input())
    for i in range(n):
        cat_coordinates.add(tuple(list(map(int, input().split()))))

    graph = {}
    visited = {}
    dist = {}
    safety = 1
    topleft = [min(home_coordinates[0], current_coordinates[0]) - safety, max(home_coordinates[1], current_coordinates[1]) + safety]
    bottomright = [max(home_coordinates[0], current_coordinates[0]) + safety, min(home_coordinates[1], current_coordinates[1]) - safety]


    for i in range(topleft[0], bottomright[0]):
        for j in range(bottomright[1], topleft[1]):

            visited[tuple([i, j])] = False
            visited[tuple([i + 1, j])] = False
            visited[tuple([i, j + 1])] = False

            dist[tuple([i, j])] = 10**10
            dist[tuple([i + 1, j])] = 10**10
            dist[tuple([i, j + 1])] = 10**10

            if tuple([i, j]) in cat_coordinates:
                continue
            # left
            if tuple([i+1, j]) not in cat_coordinates:
                try:
                    graph[tuple([i,j])].append(tuple([i+1, j]))
                except KeyError:
                    graph[tuple([i,j])] = [tuple([i+1, j])]
                try:
                    graph[tuple([i+1, j])].append(tuple([i,j]))
                except KeyError:
                    graph[tuple([i+1, j])] = [tuple([i,j])]
            #up
            if tuple([i, j+1]) not in cat_coordinates:
                try:
                    graph[tuple([i,j])].append(tuple([i,j + 1]))
                except KeyError:
                    graph[tuple([i,j])] = [tuple([i,j + 1])]
                try:
                    graph[tuple([i, j+1])].append(tuple([i,j]))
                except:
                    graph[tuple([i, j+1])] = [tuple([i,j])]
    dist[tuple(current_coordinates)] = 0
    print(BFS(graph, tuple(current_coordinates), visited, dist)[tuple(home_coordinates)])
    # print(dist)
    # print(dist[tuple(home_coordinates)])
