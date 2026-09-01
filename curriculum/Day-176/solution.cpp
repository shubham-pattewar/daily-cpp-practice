// Complete C++17 solution
// Day 176: Trie Implementation

#include <iostream>
#include <array>
#include <string>
struct T{std::array<T*,26>c{};bool end=false;};
void ins(T*r,const std::string&s){for(char ch:s){int i=ch-'a';if(!r->c[i])r->c[i]=new T;r=r->c[i];}r->end=true;}
bool find(T*r,const std::string&s){for(char ch:s){int i=ch-'a';if(!r->c[i])return false;r=r->c[i];}return r->end;}
int main(){int n;std::cin>>n;T*r=new T;while(n--){std::string s;std::cin>>s;ins(r,s);}std::string q;std::cin>>q;std::cout<<(find(r,q)?"Found":"Not Found")<<"\n";}
