//Nahin the Coder
//Date : 21 - 06 - 2021


#include<bits/stdc++.h>
using namespace std;

#define MAX 100
vector<int>graph[MAX];
bool visited[MAX];

void dfs(int node)
{
	visited[node] = true;
	for(int i=0; i<graph[node].size(); i++)
	{
		if(visited[graph[node][i]] == false)
		{
			dfs(graph[node][i]);
		}
	}
}



int main()
{
	ios::sync_with_stdio(false);
	
	int nodes,edges;
	cout<<"Enter the number of nodes : ";
	cin>>nodes;
	cout<<"\nEnter the number of edges : ";
	cin>>edges;
	
	cout<<"\n\nNow Enter the Elements : \n";
	
	for(int i=0; i<edges; i++)
	{
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	
	
	cout<<"\n\nNow we will see who is connected with which node :\n\n";
	
	for(int i=1; i<=nodes; i++)
	{
		cout<<i<<" : ";
		for(int j=0; j<graph[i].size(); j++)
		{
			cout<<graph[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
	int counter = 0;
	
	for(int i=1; i<=nodes; i++)
	{
		if(visited[i] == false)
		{
			dfs(i);
			counter++;
		}
	}
	
	cout<<"Graph count : "<<counter<<"\n";
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
