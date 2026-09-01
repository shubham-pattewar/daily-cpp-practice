// Complete C++17 solution
// Day 103: Power Using Recursion

#include <iostream>
long long p(long long a,long long n){if(!n)return 1;long long h=p(a,n/2);return n%2?h*h*a:h*h;}
int main(){long long a,n;std::cin>>a>>n;std::cout<<p(a,n)<<"\n";}
