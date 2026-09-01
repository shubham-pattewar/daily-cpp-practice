// Complete C++17 solution
// Day 82: Inversion Count

#include <iostream>
#include <unordered_map>
#include <vector>
int main(){int n,t;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;std::cin>>t;std::unordered_map<long long,int>m;for(int i=0;i<n;i++){if(m.count(t-a[i])){std::cout<<m[t-a[i]]<<" "<<i<<"\n";return 0;}m[a[i]]=i;}std::cout<<-1<<"\n";}
