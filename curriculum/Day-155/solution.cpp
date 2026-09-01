// Complete C++17 solution
// Day 155: BFS Traversal

#include <iostream>
#include <vector>
bool dfs(int u,std::vector<std::vector<int>>&g,std::vector<int>&v,std::vector<int>&p){v[u]=p[u]=1;for(int x:g[u])if(!v[x]&&dfs(x,g,v,p)||p[x])return true;p[u]=0;return false;}
int main(){int n,m;std::cin>>n>>m;std::vector<std::vector<int>>g(n);for(int i=0,u,v;i<m;i++){std::cin>>u>>v;g[u].push_back(v);}std::vector<int>v(n),p(n);for(int i=0;i<n;i++)if(!v[i]&&dfs(i,g,v,p)){std::cout<<"Cycle\n";return 0;}std::cout<<"No Cycle\n";}
