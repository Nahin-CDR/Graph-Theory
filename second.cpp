#include <bits/stdc++.h> 
using namespace std;

#define MAX 100000 //maximum node
vector <int> edges[MAX];
vector <int> cost[MAX]; //parallel vector to store costs;

int main() {
    int numNodes, numEdges;

    cin>>numNodes>>numEdges;
    for (int i = 1; i <= numEdges; i++) 
	{
        int x, y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    
    cout<<"\nans:\n";
  
    for(int j=1; j<=numEdges; j++)
    {
    	int size = edges[j].size();
    	cout<<j<<" :";
    	for(int i=0; i<size; i++)
    	{
    		cout<<edges[j][i]<<" ";
		}
		cout<<"\n";
	}
    
   
  
  return 0;
}
