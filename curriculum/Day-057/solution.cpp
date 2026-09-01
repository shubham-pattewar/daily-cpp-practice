// Complete C++17 solution
// Day 57: Minimum Window Substring

#include <iostream>
#include <string>
#include <unordered_map>
int main(){std::string s;std::cin>>s;std::unordered_map<char,int>m;for(char c:s)m[c]++;std::string r;for(auto [c,n]:m)r+=std::string(n,c);std::cout<<r<<"\n";}
