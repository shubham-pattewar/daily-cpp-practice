// Complete C++17 solution
// Day 44: Character Frequency

#include <iostream>
#include <map>
#include <string>
int main(){std::string s;std::getline(std::cin>>std::ws,s);std::map<char,int>m;for(char c:s)if(c!=' ')m[c]++;for(auto [c,n]:m)std::cout<<c<<" "<<n<<"\n";}
