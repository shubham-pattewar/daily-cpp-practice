// Complete C++17 solution
// Day 178: LRU Cache

#include <iostream>
#include <unordered_map>
#include <list>
class LRU{int cap;std::list<std::pair<int,int>>l;std::unordered_map<int,std::list<std::pair<int,int>>::iterator>m;public:LRU(int c):cap(c){}int get(int k){if(!m.count(k))return -1;auto it=m[k];int v=it->second;l.splice(l.begin(),l,it);return v;}void put(int k,int v){if(m.count(k)){auto it=m[k];it->second=v;l.splice(l.begin(),l,it);return;}l.push_front({k,v});m[k]=l.begin();if(l.size()>cap){auto it=--l.end();m.erase(it->first);l.pop_back();}}};
int main(){int cap,q;std::cin>>cap>>q;LRU c(cap);while(q--){int op,k;std::cin>>op>>k;if(op==1)std::cout<<c.get(k)<<"\n";else{int v;std::cin>>v;c.put(k,v);}}}
