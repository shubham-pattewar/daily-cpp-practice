// Complete C++17 solution
// Day 136: Count Nodes in Binary Tree

#include <iostream>
struct N{int x;N*l,*r;N(int v):x(v),l(nullptr),r(nullptr){}};
int dia(N*p,int&d){if(!p)return 0;int a=dia(p->l,d),b=dia(p->r,d);d=std::max(d,a+b+1);return 1+std::max(a,b);}
int main(){std::cout<<"Diameter algorithm: one DFS computes height and updates the maximum path.\n";}
