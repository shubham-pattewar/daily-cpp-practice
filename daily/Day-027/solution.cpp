// Complete C++17 solution
// Day 27: Union of Two Arrays

#include <iostream>
#include <unordered_set>
int main(){int n;std::cin>>n;std::unordered_set<long long>s;for(int i=0;i<n;i++){long long x;std::cin>>x;s.insert(x);}int m;std::cin>>m;for(int i=0;i<m;i++){long long x;std::cin>>x;s.insert(x);}std::cout<<s.size()<<"\n";}
