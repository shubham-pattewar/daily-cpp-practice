// Complete C++17 solution
// Day 74: Aggressive Cows

#include <iostream>
#include <vector>
#include <algorithm>
void bubble(std::vector<int>&a){for(int i=0;i<(int)a.size();i++)for(int j=0;j+1<(int)a.size()-i;j++)if(a[j]>a[j+1])std::swap(a[j],a[j+1]);}
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;bubble(a);for(auto x:a)std::cout<<x<<" ";std::cout<<"\n";}
