def dijkstra(graph, start):
    visited = set()
    distances = {node: float('inf') for node in graph}  # B = inf
    distances[start] = 0

    for node in graph:  #  'C': {'A': 4, 'B': 2, 'D': 1},   # Incorrect: Should use a priority queue
        for neighbor, weight in graph[node].items():  #B, 2
            if neighbor not in visited: # if B not in visited
                distances[neighbor] = min(distances[neighbor], distances[node] + weight) # compares the note directly from A to B 
                # (see distances array) and compares with the sum of A to D (distance array) plus the 'weight' from the current node 'B' : 2
        visited.add(node)  # Incorrect: Marks before all paths are explored

    return distances


##It checks the distance 
def main():
    # Example graph as adjacency list
    graph = {
        'A': {'B': 1, 'C': 4},
        'B': {'A': 1, 'C': 2, 'D': 5},
        'C': {'A': 4, 'B': 2, 'D': 1},
        'D': {'B': 5, 'C': 1}
    }

    start_node = 'A'
    distances = dijkstra(graph, start_node)
    print(f"Shortest distances from {start_node}: {distances}")

if __name__ == "__main__":
    main()
