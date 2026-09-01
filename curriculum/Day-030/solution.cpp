// Complete C++17 solution
// Day 30: Majority Element

#include <iostream>
#include <vector>
#include <unordered_map>
int main(){int n;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;std::unordered_map<long long,int>c;for(auto x:a)c[x]++;for(auto x:a)if(c[x]>n/2){std::cout<<x<<"\n";return 0;}std::cout<<-1<<"\n";}
