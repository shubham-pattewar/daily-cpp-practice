// Complete C++17 solution
// Day 37: Product of Array Except Self

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;std::vector<long long>a(n);long long p=1;for(auto&x:a){std::cin>>x;p*=x;}for(int i=0;i<n;i++){long long q=1;for(int j=0;j<n;j++)if(i!=j)q*=a[j];std::cout<<q<<" ";}std::cout<<"\n";}
