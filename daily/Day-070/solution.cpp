// Complete C++17 solution
// Day 70: Integer Square Root

#include <iostream>
long long power(long long a,int n){long long r=1;while(n){if(n&1)r*=a;a*=a;n>>=1;}return r;}
int main(){long long x;int n;std::cin>>x>>n;long long l=0,r=1000000000LL;while(l<=r){long long m=(l+r)/2,p=power(m,n);if(p==x){std::cout<<m<<"\n";return 0;}if(p<x)l=m+1;else r=m-1;}std::cout<<-1<<"\n";}
