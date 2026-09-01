// Complete C++17 solution
// Day 165: Disjoint Set Union

#include <iostream>
#include <vector>
#include <string>
int main(){std::string a,b;std::cin>>a>>b;int n=a.size(),m=b.size();std::vector<int>p(m+1),c(m+1);for(int j=0;j<=m;j++)p[j]=j;for(int i=1;i<=n;i++){c[0]=i;for(int j=1;j<=m;j++)c[j]=(a[i-1]==b[j-1]?p[j-1]:1+std::min({p[j],c[j-1],p[j-1]}));p.swap(c);}std::cout<<p[m]<<"\n";}
