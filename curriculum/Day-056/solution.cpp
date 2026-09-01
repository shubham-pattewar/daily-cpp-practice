// Complete C++17 solution
// Day 56: Group Anagrams

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int main(){int n;std::cin>>n;std::vector<std::string>a(n);for(auto&x:a)std::cin>>x;std::sort(a.begin(),a.end(),[](auto&x,auto&y){return x<y;});std::cout<<a[0].substr(0, [&]{size_t i=0;while(i<a.front().size()&&i<a.back().size()&&a.front()[i]==a.back()[i])i++;return i;}())<<"\n";}
