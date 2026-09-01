// Complete C++17 solution
// Day 166: Climbing Stairs

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<int>dp(n+1);if(n>=1)dp[1]=1;if(n>=2)dp[2]=2;for(int i=3;i<=n;i++)dp[i]=dp[i-1]+dp[i-2];std::cout<<dp[n]<<"\n";}
