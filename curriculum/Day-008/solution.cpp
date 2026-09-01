// Complete C++17 solution
// Day 8: Prime Number Check

#include <iostream>
int main(){ long long n; std::cin>>n; if(n<2){std::cout<<"Not Prime\n";return 0;} for(long long i=2;i*i<=n;i++)if(n%i==0){std::cout<<"Not Prime\n";return 0;} std::cout<<"Prime\n"; }
