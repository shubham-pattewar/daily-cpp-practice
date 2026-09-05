// Complete C++17 solution
// Day 6: Factorial of a Number

#include <iostream>
int main(){ unsigned long long n; std::cin>>n; unsigned long long f=1; for(unsigned long long i=2;i<=n;i++)f*=i; std::cout<<f<<"\n"; }
