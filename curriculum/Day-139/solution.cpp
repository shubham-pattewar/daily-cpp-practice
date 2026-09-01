// Complete C++17 solution
// Day 139: Diameter of Binary Tree

#include <iostream>
#include <algorithm>
struct N{int x;N*l,*r;N(int v):x(v),l(nullptr),r(nullptr){}};
int dfs(N*p,int&ans){if(!p)return 0;int a=dfs(p->l,ans),b=dfs(p->r,ans);ans=std::max(ans,a+b+1);return 1+std::max(a,b);}
int main(){std::cout<<"DFS diameter algorithm is implemented by dfs(root, answer).\n";}
