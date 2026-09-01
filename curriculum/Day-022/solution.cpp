// Complete C++17 solution
// Day 22: Find Missing Number

#include <iostream>
int main(){long long n;std::cin>>n;long long ans=n*(n+1)/2;for(long long i=0;i<n-1;i++){long long x;std::cin>>x;ans-=x;}std::cout<<ans<<"\n";}
