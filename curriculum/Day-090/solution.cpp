// Complete C++17 solution
// Day 90: Top K Frequent Elements

#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
int main(){int n,k;std::cin>>n>>k;std::vector<int>a(n);for(auto&x:a)std::cin>>x;std::unordered_map<int,int>f;for(int x:a)f[x]++;std::priority_queue<std::pair<int,int>>pq;for(auto [x,c]:f)pq.push({c,x});while(k--&&!pq.empty()){std::cout<<pq.top().second<<" ";pq.pop();}std::cout<<"\n";}
