// Complete C++17 solution
// Day 25: Merge Two Sorted Arrays

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;int m;std::cin>>m;std::vector<long long>b(m);for(auto&x:b)std::cin>>x;int i=0,j=0;while(i<n&&j<m){if(a[i]<b[j])i++;else if(a[i]>b[j])j++;else{std::cout<<a[i]<<" ";i++;j++;}}std::cout<<"\n";}
