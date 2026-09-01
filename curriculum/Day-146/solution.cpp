// Complete C++17 solution
// Day 146: Implement Min Heap

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<int>c(n);for(auto&x:c)std::cin>>x;int amount;std::cin>>amount;for(int i=n-1;i>=0;i--)while(amount>=c[i]){amount-=c[i];std::cout<<c[i]<<" ";}std::cout<<"\n";}
