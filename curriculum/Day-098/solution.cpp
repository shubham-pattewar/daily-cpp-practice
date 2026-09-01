// Complete C++17 solution
// Day 98: Minimum Size Subarray Sum

#include <iostream>
#include <vector>
int main(){int n;long long target;std::cin>>n>>target;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;long long sum=0;int l=0,b=n+1;for(int r=0;r<n;r++){sum+=a[r];while(sum>=target){b=std::min(b,r-l+1);sum-=a[l++];}}std::cout<<(b==n+1?0:b)<<"\n";}
