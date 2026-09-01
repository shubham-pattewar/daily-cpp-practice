// Complete C++17 solution
// Day 87: Longest Zero Sum Subarray

#include <iostream>
#include <unordered_map>
int main(){int n;std::cin>>n;std::unordered_map<long long,int>m;long long s=0,b=0;int start=0;for(int i=0;i<n;i++){long long x;std::cin>>x;s+=x;if(m.count(s))b=std::max(b,i-m[s]);else m[s]=i;}std::cout<<b<<"\n";}
