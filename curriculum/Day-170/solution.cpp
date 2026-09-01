// Complete C++17 solution
// Day 170: Longest Common Subsequence

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;std::vector<int>d(n,1);int b=0;for(int i=0;i<n;i++){for(int j=0;j<i;j++)if(a[j]<a[i])d[i]=std::max(d[i],d[j]+1);b=std::max(b,d[i]);}std::cout<<b<<"\n";}
