// Complete C++17 solution
// Day 46: Remove Duplicate Characters

#include <iostream>
#include <string>
#include <unordered_set>
int main(){std::string s;std::cin>>s;std::unordered_set<char>u;std::string r;for(char c:s)if(u.insert(c).second)r+=c;std::cout<<r<<"\n";}
