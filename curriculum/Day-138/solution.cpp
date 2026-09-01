// Complete C++17 solution
// Day 138: Balanced Binary Tree

#include <iostream>
#include <algorithm>
struct N{int x;N*l,*r;N(int v):x(v),l(nullptr),r(nullptr){}};
int height(N*p){if(!p)return 0;int a=height(p->l),b=height(p->r);if(a<0||b<0||std::abs(a-b)>1)return -1000000;return 1+std::max(a,b);}
int main(){std::cout<<"Use height(root)>=0 after constructing the tree.\n";}
