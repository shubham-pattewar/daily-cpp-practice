// Complete C++17 solution
// Day 21: Linear Search

#include <iostream>
#include <vector>
int main(){int n,t;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;std::cin>>t;for(int i=0;i<n;i++)if(a[i]==t){std::cout<<i<<"\n";return 0;}std::cout<<-1<<"\n";}
