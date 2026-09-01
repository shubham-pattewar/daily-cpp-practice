// Complete C++17 solution
// Day 20: Rotate Array by K

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n,k;std::cin>>n>>k;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;if(n)k%=n;std::rotate(a.begin(),a.begin()+((n-k)%n),a.end());for(auto x:a)std::cout<<x<<" ";std::cout<<"\n";}
