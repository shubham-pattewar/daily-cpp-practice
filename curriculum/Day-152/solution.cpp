// Complete C++17 solution
// Day 152: Job Sequencing

#include <iostream>
#include <vector>
#include <queue>
int main(){int n,m;std::cin>>n>>m;std::vector<std::vector<int>>g(n);for(int i=0,u,v;i<m;i++){std::cin>>u>>v;g[u].push_back(v);}int s;std::cin>>s;std::vector<int>d(n,-1);std::queue<int>q;q.push(s);d[s]=0;while(!q.empty()){int u=q.front();q.pop();for(int x:g[u])if(d[x]<0)d[x]=d[u]+1,q.push(x);}for(int x:d)std::cout<<x<<" ";}
