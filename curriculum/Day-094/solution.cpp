// Complete C++17 solution
// Day 94: 3Sum Closest

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n;long long target;std::cin>>n>>target;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;long long best=9e18;for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)for(int k=j+1;k<n;k++){long long s=a[i]+a[j]+a[k];best=std::min(best,std::llabs(s-target));}std::cout<<best<<"\n";}
