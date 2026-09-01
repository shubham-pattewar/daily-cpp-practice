// Complete C++17 solution
// Day 145: Kth Smallest in BST

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n,k;std::cin>>n>>k;std::vector<int>a(n);for(auto&x:a)std::cin>>x;std::sort(a.begin(),a.end());if(k>=1&&k<=n)std::cout<<a[k-1]<<"\n";else std::cout<<-1<<"\n";}
