// Complete C++17 solution
// Day 125: Next Greater Element

#include <iostream>
#include <vector>
#include <stack>
int main(){int n;std::cin>>n;std::vector<int>a(n),r(n,-1);for(auto&x:a)std::cin>>x;std::stack<int>s;for(int i=n-1;i>=0;i--){while(!s.empty()&&s.top()<=a[i])s.pop();if(!s.empty())r[i]=s.top();s.push(a[i]);}for(int x:r)std::cout<<x<<" ";}
