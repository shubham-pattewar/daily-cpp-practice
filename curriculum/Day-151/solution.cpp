// Complete C++17 solution
// Day 151: Minimum Coins

#include <iostream>
#include <vector>
void dfs(int u,std::vector<std::vector<int>>&g,std::vector<int>&v){v[u]=1;std::cout<<u<<" ";for(int x:g[u])if(!v[x])dfs(x,g,v);}
int main(){int n,m;std::cin>>n>>m;std::vector<std::vector<int>>g(n);for(int i=0,u,v;i<m;i++){std::cin>>u>>v;g[u].push_back(v);g[v].push_back(u);}std::vector<int>v(n);dfs(0,g,v);}
