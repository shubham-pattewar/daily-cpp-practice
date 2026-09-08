// Complete C++17 solution
// Day 9: Print All Primes in a Range

#include <iostream>
int main(){ int l,r; std::cin>>l>>r; for(int n=std::max(2,l);n<=r;n++){bool p=true;for(int d=2;1LL*d*d<=n;d++)if(n%d==0){p=false;break;}if(p)std::cout<<n<<" ";}std::cout<<"\n"; }
