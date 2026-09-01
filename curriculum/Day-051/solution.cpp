// Complete C++17 solution
// Day 51: String Compression

#include <iostream>
#include <string>
int main(){std::string s;std::cin>>s;std::string r;for(size_t i=0;i<s.size();){size_t j=i;while(j<s.size()&&s[j]==s[i])j++;r+=s[i];r+=std::to_string(j-i);i=j;}std::cout<<r<<"\n";}
