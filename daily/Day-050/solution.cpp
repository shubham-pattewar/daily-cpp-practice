// Complete C++17 solution
// Day 50: Longest Common Prefix

#include <iostream>
#include <string>
int main(){std::string a,b;std::cin>>a>>b;size_t i=0;while(i<a.size()&&i<b.size()&&a[i]==b[i])i++;std::cout<<a.substr(0,i)<<"\n";}
