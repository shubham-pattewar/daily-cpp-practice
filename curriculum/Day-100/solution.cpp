// Complete C++17 solution
// Day 100: Sum of First N Numbers

#include <iostream>
long long f(long long n){return n==0?0:n+f(n-1);}
int main(){long long n;std::cin>>n;std::cout<<f(n)<<"\n";}
