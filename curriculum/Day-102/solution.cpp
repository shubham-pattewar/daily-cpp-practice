// Complete C++17 solution
// Day 102: Reverse a String Recursively

#include <iostream>
#include <string>
void f(std::string&s,int l,int r){if(l>=r)return;std::swap(s[l],s[r]);f(s,l+1,r-1);}
int main(){std::string s;std::cin>>s;f(s,0,s.size()-1);std::cout<<s<<"\n";}
