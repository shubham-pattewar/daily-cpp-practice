// Complete C++17 solution
// Day 15: Sum of Digits

#include <iostream>
int main(){ long long n;std::cin>>n;n=std::llabs(n);long long s=0;while(n){s+=n%10;n/=10;}std::cout<<s<<"\n"; }
