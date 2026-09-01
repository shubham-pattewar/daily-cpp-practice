// Complete C++17 solution
// Day 11: Reverse a Number

#include <iostream>
int main(){ long long n;std::cin>>n; long long x=n,r=0;while(x){r=r*10+x%10;x/=10;}std::cout<<r<<"\n"; }
