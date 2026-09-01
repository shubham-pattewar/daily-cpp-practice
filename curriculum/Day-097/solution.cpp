// Complete C++17 solution
// Day 97: Longest Subarray with At Most K Distinct

#include <iostream>
#include <vector>
#include <unordered_map>
int main(){int n,k;std::cin>>n>>k;std::vector<int>a(n);for(auto&x:a)std::cin>>x;std::unordered_map<int,int>m;int l=0,b=0;for(int r=0;r<n;r++){m[a[r]]++;while((int)m.size()>k){if(--m[a[l]]==0)m.erase(a[l]);l++;}b=std::max(b,r-l+1);}std::cout<<b<<"\n";}
