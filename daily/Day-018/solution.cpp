// Complete C++17 solution
// Day 18: Move Zeros to End

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;int p=0;for(auto x:a)if(x!=0)a[p++]=x;while(p<n)a[p++]=0;for(auto x:a)std::cout<<x<<" ";std::cout<<"\n";}
