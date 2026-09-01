// Complete C++17 solution
// Day 177: Word Search

#include <iostream>
#include <vector>
#include <string>
bool f(std::vector<std::string>&b,std::string&w,int r,int c,int k){if(k==(int)w.size())return true;if(r<0||c<0||r>=b.size()||c>=b[0].size()||b[r][c]!=w[k])return false;char x=b[r][c];b[r][c]='#';bool ok=f(b,w,r+1,c,k+1)||f(b,w,r-1,c,k+1)||f(b,w,r,c+1,k+1)||f(b,w,r,c-1,k+1);b[r][c]=x;return ok;}
int main(){int n,m;std::cin>>n>>m;std::vector<std::string>b(n);for(auto&x:b)std::cin>>x;std::string w;std::cin>>w;for(int i=0;i<n;i++)for(int j=0;j<m;j++)if(f(b,w,i,j,0)){std::cout<<"Found\n";return 0;}std::cout<<"Not Found\n";}
