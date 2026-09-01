// Complete C++17 solution
// Day 10: GCD and LCM

#include <iostream>
#include <numeric>
int main(){ long long a,b;std::cin>>a>>b;long long g=std::gcd(a,b);std::cout<<g<<" "<<(a/g)*b<<"\n"; }
