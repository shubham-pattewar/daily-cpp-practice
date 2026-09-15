// Complete C++17 solution
// Day 16: Power Without pow()

#include <iostream>
int main(){ long long a,b;std::cin>>a>>b;long long base=a,ans=1;while(b){if(b&1)ans*=base;base*=base;b>>=1;}std::cout<<ans<<"\n"; }
