// Complete C++17 solution
// Day 147: Kth Largest Element

#include <iostream>
#include <vector>
#include <algorithm>
int main(){int n;std::cin>>n;std::vector<std::tuple<int,int,int>>a;for(int i=0,d,p;i<n;i++){std::cin>>d>>p;a.push_back({p,d,i+1});}std::sort(a.rbegin(),a.rend());std::vector<int>slot(n+1);int profit=0;for(auto [p,d,id]:a)for(int t=std::min(d,n);t>=1;t--)if(!slot[t]){slot[t]=id;profit+=p;break;}std::cout<<profit<<"\n";}
