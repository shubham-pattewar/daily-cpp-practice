// Complete C++17 solution
// Day 71: Nth Root Using Binary Search

#include <iostream>
#include <vector>
long long hours(const std::vector<long long>&a,long long k){long long s=0;for(auto x:a)s+=(x+k-1)/k;return s;}
int main(){int n;long long h;std::cin>>n>>h;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;long long l=1,r=*std::max_element(a.begin(),a.end());while(l<r){long long m=(l+r)/2;if(hours(a,m)<=h)r=m;else l=m+1;}std::cout<<l<<"\n";}
