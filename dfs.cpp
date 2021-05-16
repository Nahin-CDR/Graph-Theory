#include<bits/stdc++.h>
using namespace std;


bool visited[100];
vector<int>adj[100];


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
	
	for(int i = 1; i<=edge; i++)
	{
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
	cout<<"\n\nWhich node is connected with whom :\n\n";
	
	for(int i=1; i<=node; i++)
	{
		cout<<"Node "<<i<<": ";
		for(auto j:adj[i])
		{
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	
	int count = 0;
	
	for(int i=1; i<=node; i++)
	{
		if(visited[i]==false)
		{
			dfs(i);
			count++;
			break;
		}
	}
	
	cout<<"No of Graph : "<<count;
	
	cout<<"\n\n--------------------\n\n";
	
	
	cout<<"visited Array :\n";
	
	for(int i=1; i<=10; i++)
	{
		cout<<visited[i]<<" ";
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
