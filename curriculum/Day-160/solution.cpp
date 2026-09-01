// Complete C++17 solution
// Day 160: Topological Sort

#include <iostream>
#include <vector>
struct DSU{std::vector<int>p;DSU(int n):p(n,-1){}int find(int x){return p[x]<0?x:p[x]=find(p[x]);}bool unite(int a,int b){a=find(a);b=find(b);if(a==b)return false;if(p[a]>p[b])std::swap(a,b);p[a]+=p[b];p[b]=a;return true;}};
int main(){int n,q;std::cin>>n>>q;DSU d(n);while(q--){int t,a,b;std::cin>>t>>a>>b;if(t==1)d.unite(a,b);else std::cout<<(d.find(a)==d.find(b)?"Yes":"No")<<"\n";}}
