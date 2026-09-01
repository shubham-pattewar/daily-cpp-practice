// Complete C++17 solution
// Day 107: N-Queens

#include <iostream>
#include <vector>
bool ok(std::vector<int>&c,int r,int col){for(int i=0;i<r;i++)if(c[i]==col||abs(c[i]-col)==r-i)return false;return true;}
void f(int r,int n,std::vector<int>&c){if(r==n){for(int x:c)std::cout<<x<<" ";std::cout<<"\n";return;}for(int col=0;col<n;col++)if(ok(c,r,col)){c[r]=col;f(r+1,n,c);}}
int main(){int n;std::cin>>n;std::vector<int>c(n);f(0,n,c);}
