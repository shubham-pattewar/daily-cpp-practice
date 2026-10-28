// Complete C++17 solution
// Day 59: Roman to Integer

#include <iostream>
#include <string>
#include <unordered_map>
int main(){std::string s;std::cin>>s;std::unordered_map<char,int>m;for(char c:s)m[c]++;int odd=0;for(auto [c,n]:m)odd+=n%2;std::cout<<(odd<=1?"Yes":"No")<<"\n";}
