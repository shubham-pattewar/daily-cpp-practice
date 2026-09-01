// Complete C++17 solution
// Day 89: Word Pattern

#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
int main(){std::string a,b;std::getline(std::cin>>std::ws,a);std::getline(std::cin,b);std::istringstream x(a),y(b);std::vector<std::string>p,q;std::string s;while(x>>s)p.push_back(s);while(y>>s)q.push_back(s);if(p.size()!=q.size()){std::cout<<"No\n";return 0;}std::unordered_map<std::string,std::string>m;std::unordered_map<std::string,std::string>r;for(int i=0;i<(int)p.size();i++){if(m.count(p[i])&&m[p[i]]!=q[i]||r.count(q[i])&&r[q[i]]!=p[i]){std::cout<<"No\n";return 0;}m[p[i]]=q[i];r[q[i]]=p[i];}std::cout<<"Yes\n";}
