// Complete C++17 solution
// Day 65: Search Insert Position

#include <iostream>
#include <vector>
int main(){int n,t;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;std::cin>>t;int l=0,r=n-1,first=-1,last=-1;while(l<=r){int m=(l+r)/2;if(a[m]>=t){if(a[m]==t)first=m;l=m+1;}else l=m+1;}l=0;r=n-1;while(l<=r){int m=(l+r)/2;if(a[m]<=t){if(a[m]==t)last=m;l=m+1;}else r=m-1;}std::cout<<first<<" "<<last<<"\n";}
