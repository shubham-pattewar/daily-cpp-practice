// Complete C++17 solution
// Day 61: String Rotation Check

#include <iostream>
#include <vector>
int main(){int n,t;std::cin>>n;std::vector<long long>a(n);for(auto&x:a)std::cin>>x;std::cin>>t;int l=0,r=n-1;while(l<=r){int m=l+(r-l)/2;if(a[m]==t){std::cout<<m<<"\n";return 0;}if(a[m]<t)l=m+1;else r=m-1;}std::cout<<-1<<"\n";}
