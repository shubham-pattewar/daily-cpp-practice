// Complete C++17 solution
// Day 55: Longest Repeating Character Replacement

#include <iostream>
#include <string>
#include <unordered_map>
int main(){std::string s;std::cin>>s;int k;std::cin>>k;std::unordered_map<char,int>m;int l=0,b=0,mx=0;for(int r=0;r<(int)s.size();r++){mx=std::max(mx,++m[s[r]]);while(r-l+1-mx>k)--m[s[l++]];b=std::max(b,r-l+1);}std::cout<<b<<"\n";}
