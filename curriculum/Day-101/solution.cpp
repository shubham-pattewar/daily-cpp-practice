// Complete C++17 solution
// Day 101: Reverse an Array Recursively

#include <iostream>
#include <vector>
void f(std::vector<int>&a,int l,int r){if(l>=r)return;std::swap(a[l],a[r]);f(a,l+1,r-1);}
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;f(a,0,n-1);for(int x:a)std::cout<<x<<" ";}
