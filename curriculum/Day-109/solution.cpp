// Complete C++17 solution
// Day 109: Sudoku Solver

#include <iostream>
#include <vector>
#include <string>
bool solve(std::vector<std::vector<int>>&b){for(int r=0;r<9;r++)for(int c=0;c<9;c++)if(b[r][c]==0){for(int x=1;x<=9;x++){bool ok=true;for(int k=0;k<9;k++)if(b[r][k]==x||b[k][c]==x||b[r/3*3+k/3][c/3*3+k%3]==x)ok=false;if(ok){b[r][c]=x;if(solve(b))return true;b[r][c]=0;}}return false;}return true;}
int main(){std::vector<std::vector<int>>b(9,std::vector<int>(9));for(auto&r:b)for(auto&x:r)std::cin>>x;solve(b);for(auto&r:b){for(auto x:r)std::cout<<x<<" ";std::cout<<"\n";}}
