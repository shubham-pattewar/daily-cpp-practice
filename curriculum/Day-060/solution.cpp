// Complete C++17 solution
// Day 60: Integer to Roman

#include <iostream>
#include <string>
#include <unordered_map>
int main(){std::string a,b;std::cin>>a>>b;if(a.size()!=b.size()){std::cout<<"No\n";return 0;}std::unordered_map<char,int>m;for(char c:a)m[c]++;for(char c:b)m[c]--;for(auto [c,n]:m)if(n){std::cout<<"No\n";return 0;}std::cout<<"Yes\n";}
