#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#define MAX_VERTICES 10
int findMinKey(int key[], bool mstSet[], int vertices) 
{
    int minKey = INT_MAX, minIndex;
    for (int v = 0; v < vertices; v++)
        if (!mstSet[v] && key[v] < minKey)
		 {
            minKey = key[v];
            minIndex = v;
        }
    return minIndex;
}
void printMST(int parent[], int n, int graph[MAX_VERTICES][MAX_VERTICES]) 
{
    printf("Edge \tWeight\n");
    for (int i = 1; i < n; i++)
        printf("%d - %d \t%d\n", parent[i], i, graph[i][parent[i]]);
}
void primMST(int graph[MAX_VERTICES][MAX_VERTICES], int vertices) 
{
    int parent[vertices];  
    int key[vertices];     
    bool mstSet[vertices]; 
    for (int i = 0; i < vertices; i++)
	 {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }
    key[0] = 0;
    parent[0] = -1;
    for (int count = 0; count < vertices - 1; count++) 
	{
        int u = findMinKey(key, mstSet, vertices);
        mstSet[u] = true;
        for (int v = 0; v < vertices; v++)
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v]) 
			{
                parent[v] = u;
                key[v] = graph[u][v];
            }
    }
    printMST(parent, vertices, graph);
}
int main() 
{
    int vertices;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    int graph[MAX_VERTICES][MAX_VERTICES];
    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < vertices; i++) 
	{
        for (int j = 0; j < vertices; j++) 
		{
            scanf("%d", &graph[i][j]);
             if (graph[i][j] == INT_MAX) 
			 {
                // Adjust if needed for your specific needs
                // e.g., you could use a different large value for infinity
            }
        }
    }
    primMST(graph, vertices);
    return 0;
}