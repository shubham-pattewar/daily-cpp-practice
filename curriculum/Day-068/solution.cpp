// Complete C++17 solution
// Day 68: Find Minimum in Rotated Array

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;int l=0,r=n-1;while(l<r){int m=(l+r)/2;if(a[m]<a[m+1])l=m+1;else r=m;}std::cout<<l<<"\n";}
