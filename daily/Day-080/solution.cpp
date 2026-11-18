// Complete C++17 solution
// Day 80: Counting Sort

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;int z=0,o=0,t=0;for(int x:a){z+=x==0;o+=x==1;t+=x==2;}for(int i=0;i<z;i++)std::cout<<0<<" ";for(int i=0;i<o;i++)std::cout<<1<<" ";for(int i=0;i<t;i++)std::cout<<2<<" ";}
