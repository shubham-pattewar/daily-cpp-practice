// Complete C++17 solution
// Day 108: Rat in a Maze

#include <iostream>
#include <vector>
void f(int r,int c,std::vector<std::vector<int>>&a,std::vector<std::vector<int>>&v){int n=a.size(),m=a[0].size();if(r<0||c<0||r>=n||c>=m||a[r][c]==0||v[r][c])return;v[r][c]=1;if(r==n-1&&c==m-1){std::cout<<"Path exists\n";exit(0);}f(r+1,c,a,v);f(r,c+1,a,v);f(r-1,c,a,v);f(r,c-1,a,v);}
int main(){int n,m;std::cin>>n>>m;std::vector<std::vector<int>>a(n,vector<int>(m)),v(n,vector<int>(m));for(auto&r:a)for(auto&x:r)std::cin>>x;f(0,0,a,v);std::cout<<"No path\n";}
