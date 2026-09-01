// Complete C++17 solution
// Day 42: Palindrome String

#include <iostream>
#include <string>
#include <algorithm>
int main(){std::string s;std::cin>>s;std::string t=s;std::reverse(t.begin(),t.end());std::cout<<(s==t?"Palindrome":"Not Palindrome")<<"\n";}
