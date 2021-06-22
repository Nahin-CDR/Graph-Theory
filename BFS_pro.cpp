//Nahin the Coder
//Date : 22 - 06 - 2021


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
				visited[next] = true ;
				disTance[next] = disTance[node] + 1;
				Q.push(next);
			}
		}
	}
}






int main()
{
	ios::sync_with_stdio(false);
	
	cout<<"MASTER !\n\n";
	cout<<"Welcome to your BFS program \n";
	cout<<"---------------------------------\n\n";
	
	
	
	
	
	
	
	
	
	
	int nodes,edges;
	
	cout<<"Enter the number of nodes : ";
	cin>>nodes;
	cout<<"\nEnter the number of edges : ";
	cin>>edges;
	
	cout<<"\nNow,Enter the elements of graph :\n";
	
	for(int i=0; i<edges; i++)
	{
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	
	int source;
	cout<<"Now intput the source node : ";
	cin>>source;
	
	bfs(source);
	
	
	cout<<"Distance from given source node "<<source<<" is :\n";
	
	for(int i=1; i<=nodes; i++)
	{
		cout<<i<<" is : ";
		if(disTance[i] == 0 and i != source)
		{
			cout<<"unreachable\n";
		}
		else
		{
			cout<<disTance[i]<<"\n";
		}
		
	}
	
	return 0;
}
