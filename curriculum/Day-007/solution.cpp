// Complete C++17 solution
// Day 7: Fibonacci Series

#include <iostream>
int main(){ int n; std::cin>>n; long long a=0,b=1; for(int i=0;i<n;i++){std::cout<<a<<(i+1==n?'\n':' '); long long c=a+b;a=b;b=c;} }
