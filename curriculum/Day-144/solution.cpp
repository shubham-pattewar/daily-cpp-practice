// Complete C++17 solution
// Day 144: Validate BST

#include <iostream>
#include <climits>
struct N{int x;N*l,*r;N(int v):x(v),l(nullptr),r(nullptr){}};
bool ok(N*r,long long lo,long long hi){return !r||(r->x>lo&&r->x<hi&&ok(r->l,lo,r->x)&&ok(r->r,r->x,hi));}
int main(){std::cout<<"Validate a constructed BST with ok(root,LLONG_MIN,LLONG_MAX).\n";}
