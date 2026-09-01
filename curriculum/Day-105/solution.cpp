// Complete C++17 solution
// Day 105: Generate All Permutations

#include <iostream>
#include <vector>
#include <algorithm>
void p(std::vector<int>&a,int i){if(i==(int)a.size()){for(int x:a)std::cout<<x<<" ";std::cout<<"\n";return;}for(int j=i;j<(int)a.size();j++){std::swap(a[i],a[j]);p(a,i+1);std::swap(a[i],a[j]);}}
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;p(a,0);}
