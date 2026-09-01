// Complete C++17 solution
// Day 162: Dijkstra's Algorithm

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;long long p=0,skip=0;for(long long x:a){long long np=std::max(p,skip+x);skip=p;p=np;}std::cout<<p<<"\n";}
