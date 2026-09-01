// Complete C++17 solution
// Day 45: Remove Spaces

#include <iostream>
#include <string>
#include <algorithm>
int main(){std::string s;std::getline(std::cin>>std::ws,s);s.erase(std::remove(s.begin(),s.end(),' '),s.end());std::cout<<s<<"\n";}
