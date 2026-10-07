// Complete C++17 solution
// Day 38: Merge Intervals

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n;std::cin>>n;std::vector<std::pair<int,int>>v(n);for(auto&x:v)std::cin>>x.first>>x.second;std::sort(v.begin(),v.end());std::vector<std::pair<int,int>>r;for(auto p:v){if(r.empty()||r.back().second<p.first)r.push_back(p);else r.back().second=std::max(r.back().second,p.second);}for(auto p:r)std::cout<<p.first<<" "<<p.second<<"\n";}
