// Complete C++17 solution
// Day 66: First and Last Position

#include <iostream>
#include <vector>
int main(){int n,t;std::cin>>n;std::vector<int>a(n);for(auto&x:a)std::cin>>x;std::cin>>t;int l=0,r=n-1;while(l<=r){int m=(l+r)/2;if(a[m]==t){std::cout<<m<<"\n";return 0;}if(a[l]<=a[m]){if(a[l]<=t&&t<a[m])r=m-1;else l=m+1;}else{if(a[m]<t&&t<=a[r])l=m+1;else r=m-1;}}std::cout<<-1<<"\n";}
