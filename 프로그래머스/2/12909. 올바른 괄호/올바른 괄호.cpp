#include<string>
#include<iostream>
#include<vector>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    vector<char> stack;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='('){
            stack.push_back('(');
        }
        else {
            if(stack.size()>0 && stack.back() != '('){
                answer = false;
                break;
            }
            else if(stack.size() == 0) {
                answer = false;
                break;
            }
            stack.pop_back();
        }
    }
    if(stack.size() > 0) answer = false;
    
    return answer;
}