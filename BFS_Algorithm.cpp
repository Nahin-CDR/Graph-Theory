//Nahin the Coder
//21 - 06 - 2021

#include<bits/stdc++.h>
using namespace std;

#define MAX 100
vector<int>graph[MAX];
bool visited[MAX];
int disTance[MAX];
queue<int>Q;

void bfs(int source)
{
	visited[source] = true;
	disTance[source] = 0;
	Q.push(source);
	while(!Q.empty())
	{
		int node = Q.front();
		Q.pop();
		for(int i=0; i<graph[node].size(); i++)
		{
			int next = graph[node][i];
			if(visited[next] == false)
			{
				visited[next] = true;
				disTance[next] = disTance[node] + 1;
				Q.push(next); 
			}
		}
	}
}


int main()
{
	ios::sync_with_stdio(false);
	
	int nodes,edges;
	
	cout<<"-------------------------------------\n\n";
	cout<<"Welcome to your BFS program MASTER ! ";
	cout<<"\n\n------------------------------------\n\n\n";
	
	cout<<"Please enter the number of NODES : ";
	cin>>nodes;
	cout<<"\nPlease enter the number of EDGES : ";
	cin>>edges;
	
	cout<<"\nNow,Enter elements : \n";
	for(int i=1; i<=edges; i++)
	{
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	
	cout<<"\n\n";
	
	cout<<"Master ! may I know your source node please ? \n";
	cout<<": ";
	int source;
	cin>>source;
	bfs(source);
	
	cout<<"From source node "<<source<<"\n\n";
	
	for(int i=1; i<=nodes; i++)
	{
		cout<<"Distance of node "<<i<<" is : "<<disTance[i]<<"\n";
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
