// Complete C++17 solution
// Day 23: Find Duplicate Number

#include <iostream>
#include <unordered_set>
int main(){int n;std::cin>>n;std::unordered_set<long long>s;for(int i=0;i<n;i++){long long x;std::cin>>x;if(!s.insert(x).second){std::cout<<x<<"\n";return 0;}}std::cout<<"No duplicate\n";}
