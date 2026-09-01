// Complete C++17 solution
// Day 40: Trapping Rain Water

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n;std::cin>>n;std::vector<int>h(n);for(auto&x:h)std::cin>>x;int l=0,r=n-1,lm=0,rm=0;long long ans=0;while(l<r){if(h[l]<=h[r]){lm=std::max(lm,h[l]);ans+=lm-h[l];l++;}else{rm=std::max(rm,h[r]);ans+=rm-h[r];r--;}}std::cout<<ans<<"\n";}
