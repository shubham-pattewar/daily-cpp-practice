// Complete C++17 solution
// Day 150: Fractional Knapsack

#include <iostream>
#include <vector>
#include <algorithm>
struct I{double w,v;};
int main(){int n;double cap;std::cin>>n>>cap;std::vector<I>a(n);for(auto&x:a)std::cin>>x.w>>x.v;std::sort(a.begin(),a.end(),[](I&a,I&b){return a.v/a.w>b.v/b.w;});double ans=0;for(auto x:a){double take=std::min(cap,x.w);ans+=take*x.v/x.w;cap-=take;if(cap<=0)break;}std::cout<<ans<<"\n";}
