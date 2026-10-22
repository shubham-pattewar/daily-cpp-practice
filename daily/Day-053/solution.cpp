// Complete C++17 solution
// Day 53: Longest Palindromic Substring

#include <iostream>
#include <string>
#include <algorithm>
int main(){std::string s;std::cin>>s;int best=0;for(int i=0;i<(int)s.size();i++){for(int l=i,r=i;l>=0&&r<(int)s.size()&&s[l]==s[r];l--,r++)best=std::max(best,r-l+1);for(int l=i,r=i+1;l>=0&&r<(int)s.size()&&s[l]==s[r];l--,r++)best=std::max(best,r-l+1);}std::cout<<best<<"\n";}
