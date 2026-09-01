// Complete C++17 solution
// Day 54: Longest Substring Without Repeating Characters

#include <iostream>
#include <string>
#include <unordered_set>
int main(){std::string s;std::cin>>s;std::unordered_set<char>u;int l=0,b=0;for(int r=0;r<(int)s.size();r++){while(u.count(s[r]))u.erase(s[l++]);u.insert(s[r]);b=std::max(b,r-l+1);}std::cout<<b<<"\n";}
