// Complete C++17 solution
// Day 92: Remove Duplicates In-Place

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;int m=0;for(int x:a)if(m==0||a[m-1]!=x)a[m++]=x;for(int i=0;i<m;i++)std::cout<<a[i]<<" ";}
