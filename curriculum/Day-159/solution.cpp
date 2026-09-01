// Complete C++17 solution
// Day 159: Detect Cycle in Directed Graph

#include <iostream>
#include <vector>
#include <queue>
#include <climits>
int main(){int n,m;std::cin>>n>>m;std::vector<std::vector<std::pair<int,int>>>g(n);for(int i=0,u,v,w;i<m;i++){std::cin>>u>>v>>w;g[u].push_back({v,w});g[v].push_back({u,w});}std::vector<int>v(n);std::priority_queue<std::pair<int,int>,std::vector<std::pair<int,int>>,std::greater<std::pair<int,int>>>q;q.push({0,0});long long s=0;while(!q.empty()){auto [w,u]=q.top();q.pop();if(v[u])continue;v[u]=1;s+=w;for(auto [x,c]:g[u])if(!v[x])q.push({c,x});}std::cout<<s<<"\n";}
