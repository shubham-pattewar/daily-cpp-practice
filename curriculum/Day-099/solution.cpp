// Complete C++17 solution
// Day 99: Print Numbers 1 to N Recursively

#include <iostream>
void f(int i){if(i==0)return;f(i-1);std::cout<<i<<" ";}
int main(){int n;std::cin>>n;f(n);std::cout<<"\n";}
