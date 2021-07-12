#include <limits.h> 
#include <stdio.h> 
  
#define V 9 
//Menemukan Vertex dengan jarak minimal dari Vertex awal
int minDistance(int dist[], bool sptSet[]) 
{ 
    //Inisialisasi Nilai Min
    int min = INT_MAX, min_index; 
  
    for (int v = 0; v < V; v++) 
        if (sptSet[v] == false && dist[v] <= min) 
            min = dist[v], min_index = v; 
  
    return min_index; 
} 

//Mencetak jarak array
void printHasil(int dist[]) 
{ 
    printf("Vertex \t\t Jarak dari sumber\n"); 
    for (int i = 0; i < V; i++) 
        printf("%d \t\t %d\n", i, dist[i]); 
} 
  
//Immplementasi Dijkstra
void testDijkstra(int graph[V][V], int src) 
{ 
    int dist[V]; 
  
    bool sptSet[V]; 
    for (int i = 0; i < V; i++) 
        dist[i] = INT_MAX, sptSet[i] = false;  
    //Jarak Vertex awal selalu 0
    dist[src] = 0;   
    //Mencari jalur terpendek 
    for (int count = 0; count < V - 1; count++) { 
        int u = minDistance(dist, sptSet); 
        sptSet[u] = true; 
        for (int v = 0; v < V; v++) 
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX 
                && dist[u] + graph[u][v] < dist[v]) 
                dist[v] = dist[u] + graph[u][v]; 
    } 
    printHasil(dist); 
}   
int main() 
{ 
   //Contoh Graph
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },                       
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },                         
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },                         
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },                         
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
    testDijkstra(graph, 0);   
    return 0; 
} 
