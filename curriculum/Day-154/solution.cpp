// Complete C++17 solution
// Day 154: Graph Representation

#include <iostream>
#include <vector>
#include <queue>
bool dfs(int u,int p,std::vector<std::vector<int>>&g,std::vector<int>&v){v[u]=1;for(int x:g[u])if(!v[x]){if(dfs(x,u,g,v))return true;}else if(x!=p)return true;return false;}
int main(){int n,m;std::cin>>n>>m;std::vector<std::vector<int>>g(n);for(int i=0,u,v;i<m;i++){std::cin>>u>>v;g[u].push_back(v);g[v].push_back(u);}std::vector<int>v(n);for(int i=0;i<n;i++)if(!v[i]&&dfs(i,-1,g,v)){std::cout<<"Cycle\n";return 0;}std::cout<<"No Cycle\n";}
