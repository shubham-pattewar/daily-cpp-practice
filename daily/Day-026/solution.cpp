// Complete C++17 solution
// Day 26: Intersection of Two Arrays

#include <iostream>
#include <set>
int main(){int n;std::cin>>n;std::set<long long>s;for(int i=0;i<n;i++){long long x;std::cin>>x;s.insert(x);}int m;std::cin>>m;for(int i=0;i<m;i++){long long x;std::cin>>x;s.insert(x);}for(auto x:s)std::cout<<x<<" ";std::cout<<"\n";}
