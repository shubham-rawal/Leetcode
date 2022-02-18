class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        
        if(s.length() % 2 == 1) return false;
        for(auto x : s){
            if(x == '(' or x == '{' or x == '[' )   stk.push(x);
            
            else if((stk.size() > 0) and ((stk.top() == '(' and x == ')') or (stk.top() == '{' and x == '}') or (stk.top() == '[' and x == ']'))){
                stk.pop();
            } 
        else return false;
    }
        if(stk.empty())   return true;
        return false;
    }
};