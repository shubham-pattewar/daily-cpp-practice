// Complete C++17 solution
// Day 127: Largest Rectangle in Histogram

#include <iostream>
#include <vector>
class Queue{std::vector<int>a;int f=0;public:void push(int x){a.push_back(x);}void pop(){if(f<(int)a.size())f++;}int front(){return a[f];}};
int main(){int n;std::cin>>n;Queue q;while(n--){int op,x;std::cin>>op;if(op==1){std::cin>>x;q.push(x);}else if(op==2)q.pop();else std::cout<<q.front()<<" ";}}
