// Complete C++17 solution
// Day 157: Number of Islands

#include <iostream>
#include <vector>
#include <queue>
#include <climits>
int main(){int n,m,s;std::cin>>n>>m;std::vector<std::vector<std::pair<int,int>>>g(n);for(int i=0,u,v,w;i<m;i++){std::cin>>u>>v>>w;g[u].push_back({v,w});}std::cin>>s;std::vector<long long>d(n,LLONG_MAX);std::priority_queue<std::pair<long long,int>,std::vector<std::pair<long long,int>>,std::greater<std::pair<long long,int>>>q;d[s]=0;q.push({0,s});while(!q.empty()){auto [du,u]=q.top();q.pop();if(du!=d[u])continue;for(auto [v,w]:g[u])if(d[v]>du+w)d[v]=du+w,q.push({d[v],v});}for(auto x:d)std::cout<<(x==LLONG_MAX?-1:x)<<" ";}
