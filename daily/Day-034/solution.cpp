// Complete C++17 solution
// Day 34: Rearrange Positive and Negative Values

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;int l=0,r=n-1;while(l<n&&a[l]>=0)l++;while(r>=0&&a[r]<0)r--;while(l<r){std::swap(a[l],a[r]);while(l<r&&a[l]<0)l++;while(l<r&&a[r]>=0)r--;}for(auto x:a)std::cout<<x<<" ";std::cout<<"\n";}
