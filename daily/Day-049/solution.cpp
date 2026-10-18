// Complete C++17 solution
// Day 49: First Repeating Character

#include <iostream>
#include <string>
#include <unordered_set>
int main(){std::string s;std::cin>>s;std::unordered_set<char>u;for(char c:s)if(!u.insert(c).second){std::cout<<c<<"\n";return 0;}std::cout<<"None\n";}
