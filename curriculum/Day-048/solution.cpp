// Complete C++17 solution
// Day 48: First Non-Repeating Character

#include <iostream>
#include <string>
#include <unordered_map>
int main(){std::string s;std::cin>>s;std::unordered_map<char,int>m;for(char c:s)m[c]++;for(char c:s)if(m[c]==1){std::cout<<c<<"\n";return 0;}std::cout<<"None\n";}
