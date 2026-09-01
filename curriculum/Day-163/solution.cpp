// Complete C++17 solution
// Day 163: Minimum Spanning Tree - Kruskal

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n,W;std::cin>>n>>W;std::vector<int>w(n),v(n);for(auto&x:w)std::cin>>x;for(auto&x:v)std::cin>>x;std::vector<int>dp(W+1);for(int i=0;i<n;i++)for(int c=W;c>=w[i];c--)dp[c]=std::max(dp[c],dp[c-w[i]]+v[i]);std::cout<<dp[W]<<"\n";}
