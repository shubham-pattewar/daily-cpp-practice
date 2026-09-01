// Complete C++17 solution
// Day 43: Count Vowels and Consonants

#include <iostream>
#include <string>
int main(){std::string s;std::getline(std::cin>>std::ws,s);int v=0,c=0;for(char x:s)if(std::isalpha((unsigned char)x)){char y=std::tolower((unsigned char)x);if(std::string("aeiou").find(y)!=std::string::npos)v++;else c++;}std::cout<<v<<" "<<c<<"\n";}
