// Complete C++17 solution
// Day 29: Maximum Product Subarray

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;long long best=a[0],mx=a[0],mn=a[0];for(int i=1;i<n;i++){long long x=a[i],p=mx*x,q=mn*x;mx=std::max({x,p,q});mn=std::min({x,p,q});best=std::max(best,mx);}std::cout<<best<<"\n";}
