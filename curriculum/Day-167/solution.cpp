// Complete C++17 solution
// Day 167: House Robber

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;if(!n){std::cout<<0;return 0;}long long p=0,q=0;for(auto x:a){long long r=std::max(q,p+x);p=q;q=r;}std::cout<<q<<"\n";}
