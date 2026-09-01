// Complete C++17 solution
// Day 180: Median of Two Sorted Arrays

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n,m;std::cin>>n>>m;std::vector<double>a(n),b(m),c;for(auto&x:a)std::cin>>x;for(auto&x:b)std::cin>>x;c=a;c.insert(c.end(),b.begin(),b.end());std::sort(c.begin(),c.end());if(c.empty())return 0;if(c.size()%2)std::cout<<c[c.size()/2]<<"\n";else std::cout<<(c[c.size()/2-1]+c[c.size()/2])/2<<"\n";}
