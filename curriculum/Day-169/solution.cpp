// Complete C++17 solution
// Day 169: Coin Change

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n,m;std::cin>>n>>m;std::vector<int>a(n),b(m);for(auto&x:a)std::cin>>x;for(auto&x:b)std::cin>>x;std::vector<int>p(m+1),c(m+1);for(int i=1;i<=n;i++){for(int j=1;j<=m;j++)c[j]=(a[i-1]==b[j-1]?p[j-1]+1:std::max(p[j],c[j-1]));p.swap(c);}std::cout<<p[m]<<"\n";}
