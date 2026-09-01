// Complete C++17 solution
// Day 175: Maximum Path Sum in Matrix

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n,m;std::cin>>n>>m;std::vector<std::vector<long long>>a(n,std::vector<long long>(m));for(auto&r:a)for(auto&x:r)std::cin>>x;for(int i=1;i<n;i++)for(int j=0;j<m;j++){long long best=a[i-1][j];if(j)best=std::max(best,a[i-1][j-1]);if(j+1<m)best=std::max(best,a[i-1][j+1]);a[i][j]+=best;}std::cout<<*std::max_element(a.back().begin(),a.back().end())<<"\n";}
