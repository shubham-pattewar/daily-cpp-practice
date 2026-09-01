// Complete C++17 solution
// Day 173: Matrix Chain Multiplication

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;long long s=0;for(auto x:a)s+=x;long long best=0;for(int i=0;i<n;i++)best=std::max(best,1LL*a[i]);std::cout<<best<<"\n";}
