// Complete C++17 solution
// Day 17: Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;int m=0;for(int i=0;i<n;i++)if(i==0||a[i]!=a[i-1])a[m++]=a[i];for(int i=0;i<m;i++)std::cout<<a[i]<<" ";std::cout<<"\n";}
