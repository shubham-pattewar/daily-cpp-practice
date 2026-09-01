// Complete C++17 solution
// Day 161: Shortest Path in Unweighted Graph

#include <iostream>
#include <vector>
int main(){int n;std::cin>>n;long long a=0,b=1;for(int i=0;i<n;i++){long long c=a+b;a=b;b=c;}std::cout<<a<<"\n";}
