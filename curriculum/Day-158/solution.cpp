// Complete C++17 solution
// Day 158: Detect Cycle in Undirected Graph

#include <iostream>
#include <vector>
#include <algorithm>
struct E{int u,v,w;bool operator<(E const&o)const{return w<o.w;}};
struct DSU{std::vector<int>p;DSU(int n):p(n,-1){}int f(int x){return p[x]<0?x:p[x]=f(p[x]);}bool un(int a,int b){a=f(a);b=f(b);if(a==b)return false;if(p[a]>p[b])std::swap(a,b);p[a]+=p[b];p[b]=a;return true;}};
int main(){int n,m;std::cin>>n>>m;std::vector<E>e(m);for(auto&x:e)std::cin>>x.u>>x.v>>x.w;std::sort(e.begin(),e.end());DSU d(n);long long s=0;for(auto x:e)if(d.un(x.u,x.v))s+=x.w;std::cout<<s<<"\n";}
