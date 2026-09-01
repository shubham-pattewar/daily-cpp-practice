// Complete C++17 solution
// Day 72: Koko Eating Bananas

#include <iostream>
#include <vector>
#include <numeric>
bool ok(const std::vector<long long>&a,long long cap,int k){long long sum=0;int parts=1;for(auto x:a){if(x>cap)return false;if(sum+x>cap){parts++;sum=0;}sum+=x;}return parts<=k;}
int main(){int n,k;std::cin>>n>>k;std::vector<long long>a(n);long long hi=0;for(auto&x:a){std::cin>>x;hi+=x;}long long lo=*std::max_element(a.begin(),a.end());while(lo<hi){long long m=(lo+hi)/2;if(ok(a,m,k))hi=m;else lo=m+1;}std::cout<<lo<<"\n";}
