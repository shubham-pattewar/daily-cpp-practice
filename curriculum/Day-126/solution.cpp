// Complete C++17 solution
// Day 126: Previous Greater Element

#include <iostream>
#include <vector>
#include <stack>
int main(){int n;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;std::stack<int>s;long long best=0;for(int i=0;i<=n;i++){int h=i==n?0:a[i];while(!s.empty()&&a[s.top()]>h){int j=s.top();s.pop();int l=s.empty()?0:s.top()+1;best=std::max(best,1LL*a[j]*(i-l));}s.push(i);}std::cout<<best<<"\n";}
