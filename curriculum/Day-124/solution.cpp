// Complete C++17 solution
// Day 124: Valid Parentheses Using Stack

#include <iostream>
#include <stack>
#include <string>
int main(){std::string s;std::cin>>s;std::stack<char>st;for(char c:s){if(c=='('||c=='['||c=='{')st.push(c);else if(st.empty()||(c==')'&&st.top()!='(')||(c==']'&&st.top()!='[')||(c=='}'&&st.top()!='{')){std::cout<<"Invalid\n";return 0;}else st.pop();}std::cout<<(st.empty()?"Valid":"Invalid")<<"\n";}
