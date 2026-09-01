// Complete C++17 solution
// Day 168: 0/1 Knapsack

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;int s=0;for(int x:a)s+=x;if(s%2){std::cout<<"No\n";return 0;}std::vector<char>dp(s/2+1);dp[0]=1;for(int x:a)for(int j=s/2;j>=x;j--)dp[j]|=dp[j-x];std::cout<<(dp[s/2]?"Yes":"No")<<"\n";}
