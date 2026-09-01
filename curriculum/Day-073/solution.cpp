// Complete C++17 solution
// Day 73: Allocate Minimum Pages

#include <iostream>
#include <vector>
#include <algorithm>
bool ok(const std::vector<long long>&a,long long d,int k){int c=1;long long last=a[0];for(int i=1;i<(int)a.size();i++)if(a[i]-last>=d){c++;last=a[i];}return c>=k;}
int main(){int n,k;std::cin>>n>>k;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;std::sort(a.begin(),a.end());long long l=0,r=a.back()-a.front();while(l<r){long long m=(l+r+1)/2;if(ok(a,m,k))l=m;else r=m-1;}std::cout<<l<<"\n";}
