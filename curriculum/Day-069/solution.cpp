// Complete C++17 solution
// Day 69: Peak Element

#include <iostream>
#include <cmath>
int main(){long long n;std::cin>>n;long long l=0,r=n,ans=0;while(l<=r){long long m=(l+r)/2;if(m<=n/m||m==0){ans=m;l=m+1;}else r=m-1;}std::cout<<ans<<"\n";}
