// Complete C++17 solution
// Day 39: Next Permutation

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;std::next_permutation(a.begin(),a.end());for(auto x:a)std::cout<<x<<" ";std::cout<<"\n";}
