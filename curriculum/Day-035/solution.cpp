// Complete C++17 solution
// Day 35: Three Sum

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)for(int k=j+1;k<n;k++)if(a[i]+a[j]+a[k]==0)std::cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<"\n";}
