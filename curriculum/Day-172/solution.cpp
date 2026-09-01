// Complete C++17 solution
// Day 172: Edit Distance

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;std::vector<std::vector<long long>>dp(n, std::vector<long long>(n));for(int i=0;i<n;i++)dp[i][i]=0;for(int len=2;len<=n;len++)for(int l=0;l+len<=n;l++){int r=l+len-1;dp[l][r]=1e18;for(int k=l;k<r;k++)dp[l][r]=std::min(dp[l][r],dp[l][k]+dp[k+1][r]+1LL*a[l]*a[k+1]*a[r]);}std::cout<<(n?dp[0][n-1]:0)<<"\n";}
