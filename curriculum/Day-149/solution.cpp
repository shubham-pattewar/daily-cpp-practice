// Complete C++17 solution
// Day 149: Activity Selection

#include <iostream>
#include <vector>
int main(){int n,m;std::cin>>n>>m;std::vector<std::vector<int>>g(n);for(int i=0,u,v;i<m;i++){std::cin>>u>>v;g[u].push_back(v);g[v].push_back(u);}for(int i=0;i<n;i++){std::cout<<i<<":";for(int v:g[i])std::cout<<" "<<v;std::cout<<"\n";}}
