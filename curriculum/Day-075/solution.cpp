// Complete C++17 solution
// Day 75: Bubble Sort

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;for(int i=0;i<n;i++){int p=i;for(int j=i+1;j<n;j++)if(a[j]<a[p])p=j;std::swap(a[i],a[p]);}for(auto x:a)std::cout<<x<<" ";}
