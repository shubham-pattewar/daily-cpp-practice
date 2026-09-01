// Complete C++17 solution
// Day 129: Implement Queue Using Linked List

#include <iostream>
#include <queue>
#include <unordered_map>
#include <string>
int main(){std::string s;std::cin>>s;std::queue<char>q;std::unordered_map<char,int>m;for(char c:s){m[c]++;q.push(c);while(!q.empty()&&m[q.front()]>1)q.pop();std::cout<<(q.empty()?'#':q.front())<<" ";}std::cout<<"\n";}
