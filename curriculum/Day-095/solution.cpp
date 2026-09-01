// Complete C++17 solution
// Day 95: Maximum Sum Subarray of Size K

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n,k;std::cin>>n>>k;std::vector<int>a(n);for(auto&x:a)std::cin>>x;long long s=0,b=0;for(int i=0;i<k;i++)s+=a[i];b=s;for(int i=k;i<n;i++){s+=a[i]-a[i-k];b=std::max(b,s);}std::cout<<b<<"\n";}
