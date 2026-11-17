// Complete C++17 solution
// Day 79: Quick Sort

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;int mx=0;for(int x:a)mx=std::max(mx,x);std::vector<int>c(mx+1);for(int x:a)c[x]++;for(int x=0;x<=mx;x++)while(c[x]--)std::cout<<x<<" ";}
