// Complete C++17 solution
// Day 106: Combination Sum

#include <iostream>
#include <vector>
void f(std::vector<int>&a,int i,int t,std::vector<int>&c){if(t==0){for(int x:c)std::cout<<x<<" ";std::cout<<"\n";return;}if(i==(int)a.size()||t<0)return;for(int j=i;j<(int)a.size();j++){c.push_back(a[j]);f(a,j,t-a[j],c);c.pop_back();}}
int main(){int n,t;std::cin>>n>>t;std::vector<int>a(n),c;for(auto&x:a)std::cin>>x;f(a,0,t,c);}
