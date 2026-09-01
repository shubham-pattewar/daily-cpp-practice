// Complete C++17 solution
// Day 33: Best Time to Buy and Sell Stock

#include <iostream>
#include <vector>
#include <climits>
int main(){int n;std::cin>>n;long long mn=LLONG_MAX,profit=0;for(int i=0;i<n;i++){long long x;std::cin>>x;mn=std::min(mn,x);profit=std::max(profit,x-mn);}std::cout<<profit<<"\n";}
