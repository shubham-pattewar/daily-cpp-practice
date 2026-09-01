// Complete C++17 solution
// Day 13: Armstrong Number

#include <iostream>
int main(){ long long n;std::cin>>n;long long x=n,s=0,p=1;while(x){int d=x%10;s+=d*d*d;x/=10;}std::cout<<(s==n?"Armstrong":"Not Armstrong")<<"\n"; }
