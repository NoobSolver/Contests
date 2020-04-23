#include<bits/stdc++.h>
 
typedef long  double ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
#define pl push_right
 
using namespace std;
 class Graph{
	 int v;
	 int list[10000];
public:
Graph(int v)
{
 this->v=v;
 list v=new list[v];
}
void add(int v,int w)
{
	list.push_back(w);
}
void bfs(int s)
{
	bool * visited=new bool[v];
	for(int i =0;i<v;i++)
	visited[i]=false;
	int queue[1000];
	visited[s]=true;
	queue.push_back(s);
	int i;
	while(!queue.empty)
	{
		s=queue.front();
		cout<<s<<" ";
		queue.pop_front();
		for(i=0;i<s;i++)
		{
			if(!visited[i])
			{
				visited[*i]=-true;
				queue.push_back(*i);
			}
		}
	}
}
};
	 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.precision(10);
	cout<<fixed;
	Graph g(4);
	g.edge(0,1);
	g.edge(0,2);
	g.edge(1,2);
	g.edge(2,0);
	g.edge(2,3);
	g.edge(3,3);
	cout<<"BFS is:\n";
	g.bfs(2);	
return 0;
}
