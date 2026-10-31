// Complete C++17 solution
// Day 62: Binary Search

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n,t;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;std::cin>>t;std::cout<<std::lower_bound(a.begin(),a.end(),t)-a.begin()<<"\n";}
