// Complete C++17 solution
// Day 86: Count Distinct Elements in Window

#include <iostream>
#include <vector>
#include <unordered_map>
int main(){int n,k;std::cin>>n>>k;std::vector<int>a(n);for(auto&x:a)std::cin>>x;std::unordered_map<int,int>m;for(int i=0;i<k;i++)m[a[i]]++;std::cout<<m.size()<<" ";for(int i=k;i<n;i++){if(--m[a[i-k]]==0)m.erase(a[i-k]);m[a[i]]++;std::cout<<m.size()<<" ";}std::cout<<"\n";}
