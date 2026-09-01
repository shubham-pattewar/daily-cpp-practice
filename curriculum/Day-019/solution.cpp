// Complete C++17 solution
// Day 19: Left Rotate by One

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;if(n)std::rotate(a.begin(),a.begin()+1,a.end());for(auto x:a)std::cout<<x<<" ";std::cout<<"\n";}
