#include<bits/stdc++.h>
using namespace std;

vector<int>adj[200];

bool visited[200];


void dfs(int n)
{
	visited[n] = true;
	
	for(int i=0; i<adj[n].size(); i++)
	{
		if(visited[adj[n][i]] == false)
		{
			dfs(adj[n][i]); 
		}
	}
}






int main()
{
	
	int node,edge;
	cin>>node>>edge;
	
	for(int i=0; i<edge; i++)
	{
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
	for(int i=1; i<=node; i++)
	{
		cout<<"Node "<<i<<": ";
		for(int j=0; j<adj[i].size(); j++)
		{
			cout<<adj[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n\n\n\n";
	
	
	int count = 0;
	
	for(int i=1; i<=node; i++)
	{
		if(visited[i] != true)
		{
			dfs(i);
			count++;
		}
	}
	
	cout<<"Graph no: "<<count;
	
	
	
	
	return 0;
}


