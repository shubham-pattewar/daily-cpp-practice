// Complete C++17 solution
// Day 85: Longest Consecutive Sequence

#include <iostream>
#include <unordered_map>
#include <vector>
int main(){int n,k;std::cin>>n>>k;std::unordered_map<int,int>m;for(int i=0;i<n;i++){int x;std::cin>>x;m[x]++;}for(auto [x,c]:m)std::cout<<x<<" "<<c<<"\n";}
