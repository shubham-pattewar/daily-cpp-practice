// Complete C++17 solution
// Day 32: Equilibrium Index

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;long long total=0;for(auto x:a)total+=x;long long left=0;for(int i=0;i<n;i++){total-=a[i];if(left==total){std::cout<<i<<"\n";return 0;}left+=a[i];}std::cout<<-1<<"\n";}
