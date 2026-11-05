// Complete C++17 solution
// Day 67: Search in Rotated Sorted Array

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;int l=0,r=n-1;while(l<r){int m=(l+r)/2;if(a[m]>a[r])l=m+1;else r=m;}std::cout<<a[l]<<"\n";}
