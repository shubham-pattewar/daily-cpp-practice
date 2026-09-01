// Complete C++17 solution
// Day 36: Four Sum

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;long long t;std::cin>>t;for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)for(int k=j+1;k<n;k++)for(int l=k+1;l<n;l++)if(a[i]+a[j]+a[k]+a[l]==t)std::cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<" "<<a[l]<<"\n";}
