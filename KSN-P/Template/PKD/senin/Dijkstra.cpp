#include<limits.h>
#include<stdio.h>

#define V 9
//Menemukan vertex dg jarak minimal dr vertex awal
int minDistance(int dist[],bool sptSet[]){
	int min = INT_MAX,min_index;
	//Inisialisasi min
	for(int v = 0;v < V;v++)
		if(sptSet[v] == false && dist[v] <= min)
			min = dist[v], min_index = v;
			
	return min_index;
}
//cetak array
void printHasil(int dist[]){
	printf("Vertex\t\t Jarak dr sumber\n");
	for(int i = 0;i < V;i++)
		printf("%d \t\t %d\n", i, dist[i]);
}

void testDijkstra(int graph[V][V],int src){
	int dist[V];
	
	bool sptSet[V];
	for(int i = 0;i < V;i++)
		dist[i] = INT_MAX,sptSet[i] = false;
		
		dist[src] = 0;
		
		for(int count = 0;count < V - 1;count++){
			int u = minDistance(dist,sptSet);
			sptSet[u] = true;
			
			for(int v = 0;v < V;v++)
				if(!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[u])
					dist[v] = dist[u] + graph[u][v];
		}
		printHasil(dist);
}
int main(){
	int graph[V][V] = {{0,4,0,0,0,0,0,8,0},
						{4,0,8,0,0,0,0,11,0},
						{0,8,0,7,0,4,0,0,2},
						{0,0,7,0,9,14,0,0,0},
						{0,0,0,14,0,7,8,9,9},
						};
	testDijkstra(graph, 0);
	return 0;
}
