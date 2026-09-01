// Complete C++17 solution
// Day 135: Height of Binary Tree

#include <iostream>
struct N{int x;N*l,*r;N(int v):x(v),l(nullptr),r(nullptr){}};
std::pair<int,bool> f(N*p){if(!p)return {0,true};auto a=f(p->l),b=f(p->r);return {1+std::max(a.first,b.first),a.second&&b.second&&abs(a.first-b.first)<=1};}
int main(){std::cout<<"Use f(root).second after constructing the binary tree.\n";}
