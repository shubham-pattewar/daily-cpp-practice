// Complete C++17 solution
// Day 58: Implement strStr / Find Substring

#include <iostream>
#include <string>
int main(){std::string s;std::cin>>s;std::string p;std::cin>>p;std::cout<<(s.find(p)==std::string::npos?-1:(int)s.find(p))<<"\n";}
