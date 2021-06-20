//Nahin the Coder
//Date : 20 - 06 - 21

#include<bits/stdc++.h>
using namespace std;

#define MAX 100

vector<int>graph[MAX];
bool visited[MAX];
int dis[MAX];

void bfs(int source)
{
    //first we initialize a QUEUE	
	queue<int>Q;
	//Now, as we visited our source node so we will mark it as visited
	/*
	Thats why visited is equal to true
	*/
	visited[source] = true;
	//we will keep the distance of source node is equal to ZERO
	//as we started from here !
	dis[source] = 0;
	//Now we will push it to QUEUE
	Q.push(source);
	
	while(!Q.empty())
	{
		int node = Q.front();
		Q.pop();
		
		for(int i = 0; i<graph[node].size(); i++)
		{
			int next = graph[node][i];
			if(visited[next] == false)
			{
				visited[next] = true;
				dis[next] = dis[node] + 1; //We assumed distance of each node from one another is 1
				Q.push(next);
			}
		}
	}
}






int main()
{
	ios::sync_with_stdio(false);
	
	int nodes,edges;
	
	
	cout<<"Please enter number of nodes : ";
	cin>>nodes;
	cout<<"\n";
	cout<<"Please enter number of edges : ";
	cin>>edges;
	
	for(int i = 1; i<=edges; i++)
	{
		int u,v;
		cin>>u>>v;
		
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	
	
	int source;
	cout<<"\n\nNow,\n";
	cout<<"Give a source node :";
  cin>>source;	
	
	//now call BFS
	bfs(source);
	
	cout<<"From node : "<<source<<"\n";
	for(int i=1; i<=nodes; i++)
	{
		cout<<"Distance of "<<i<<" is : "<<dis[i]<<"\n";
	}
	return 0;
}
