// Complete C++17 solution
// Day 24: Count Even and Odd Elements

#include <iostream>
int main(){int n;std::cin>>n;long long e=0,o=0;for(int i=0;i<n;i++){long long x;std::cin>>x;(x%2?o:e)++;}std::cout<<e<<" "<<o<<"\n";}
