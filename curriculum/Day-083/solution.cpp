// Complete C++17 solution
// Day 83: Two Sum

#include <iostream>
#include <unordered_map>
int main(){int n,k;std::cin>>n>>k;std::unordered_map<long long,int>m;long long sum=0,ans=0;m[0]=1;for(int i=0;i<n;i++){long long x;std::cin>>x;sum+=x;if(m.count(sum-k))ans+=m[sum-k];m[sum]++;}std::cout<<ans<<"\n";}
