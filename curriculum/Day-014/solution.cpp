// Complete C++17 solution
// Day 14: Count Digits

#include <iostream>
int main(){ long long n;std::cin>>n;if(n==0){std::cout<<1;return 0;}int c=0;while(n){c++;n/=10;}std::cout<<c<<"\n"; }
