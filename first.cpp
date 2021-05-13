#include <bits/stdc++.h>

using namespace std;

int n, m, k;
bool vis[2000];
vector<int> adj[2000];

void dfs(int u)
{
	vis[u] = 1;
	cout<<"size : "<<adj[u].size()<<"\n";
	for (int i = 0, v; i < adj[u].size(); ++i)
	{
		v = adj[u][i];
		cout<<u<<" "<<i<<" "<<v<<"\n\n";
		if (!vis[v])
		{
			cout<<v<<"visited\n";
			dfs(v);
		}	
	}
}

int main()
{
	vector<pair<int,int> > p;
	bool nonz = 0;
	cin >> n >> m;
	for (int i = 1; i <=n; ++i)
	{
		cin >> k;
		if (k)
		{
			nonz = 1;
		}
			
		for (int j = 0, v; j < k; ++j)
		{
			cin >> v;
			adj[i].push_back(v+100);
			p.push_back(make_pair(i,v+100));
			
			adj[v+100].push_back(i);
			p.push_back(make_pair(v+100,i));
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		cout<<"nodes :"<<i<<" ";
		for(auto h:adj[i])
		{
			cout<<h<<" ";
		}
		cout<<"\n";
	}
	
	
	//cout<<adj[1001][1];
	
	
	
	int ans = 0;
	cout<<"\n\n\n";
	for (int i = 1; i <=n; ++i)
	{
		if(vis[i]==0)
		{
			dfs(i);
			cout<<"\nBREAK\n";
			ans++;
		}
	}
	
	cout<<"\n----pair---\n";
	
	
	
	
	for(int i=0; i<p.size(); i++)
	{
		cout<<p[i].first<<" "<<p[i].second<<"\n";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	//cout<<"\nans = "<<ans<<" nonz = "<<nonz<<endl;
	//cout << (ans - nonz);
}
