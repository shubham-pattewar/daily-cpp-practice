// Complete C++17 solution
// Day 64: Upper Bound

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n,t;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;std::cin>>t;auto it=std::lower_bound(a.begin(),a.end(),t);std::cout<<(it==a.end()?-1:(int)(it-a.begin()))<<"\n";}
