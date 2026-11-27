// Complete C++17 solution
// Day 88: Isomorphic Strings

#include <iostream>
#include <string>
#include <unordered_map>
int main(){std::string a,b;std::cin>>a>>b;if(a.size()!=b.size()){std::cout<<"No\n";return 0;}std::unordered_map<char,char>m,n;for(int i=0;i<(int)a.size();i++){if(m.count(a[i])&&m[a[i]]!=b[i]||n.count(b[i])&&n[b[i]]!=a[i]){std::cout<<"No\n";return 0;}m[a[i]]=b[i];n[b[i]]=a[i];}std::cout<<"Yes\n";}
