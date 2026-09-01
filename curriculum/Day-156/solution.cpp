// Complete C++17 solution
// Day 156: DFS Traversal

#include <iostream>
#include <vector>
#include <queue>
int main(){int n,m;std::cin>>n>>m;std::vector<std::vector<int>>g(n);std::vector<int>in(n);for(int i=0,u,v;i<m;i++){std::cin>>u>>v;g[u].push_back(v);in[v]++;}std::queue<int>q;for(int i=0;i<n;i++)if(!in[i])q.push(i);int c=0;while(!q.empty()){int u=q.front();q.pop();std::cout<<u<<" ";c++;for(int x:g[u])if(--in[x]==0)q.push(x);}if(c<n)std::cout<<"\nCycle exists";}
