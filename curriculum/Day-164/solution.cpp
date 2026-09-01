// Complete C++17 solution
// Day 164: Minimum Spanning Tree - Prim

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n,A;std::cin>>n>>A;std::vector<int>c(n);for(auto&x:c)std::cin>>x;std::vector<int>dp(A+1,A+1);dp[0]=0;for(int x:c)for(int a=x;a<=A;a++)dp[a]=std::min(dp[a],dp[a-x]+1);std::cout<<(dp[A]>A?-1:dp[A])<<"\n";}
