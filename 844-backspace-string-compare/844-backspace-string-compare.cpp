class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string temp1;
        string temp2;
        
        for(int i = 0; i<s.length(); i++){
            if(s[i] == '#' and !temp1.empty()){
                temp1.pop_back();
            }
            else if(s[i] == '#' and temp1.empty()){
                continue;
            }
            else{
                temp1.push_back(s[i]);
            }
        }
        
        for(int i = 0; i<t.length(); i++){
            if(t[i] == '#' and !temp2.empty()){
                temp2.pop_back();
            }
            else if(t[i] == '#' and temp2.empty())  continue;
            else{
                temp2.push_back(t[i]);
            }
        }
        
        return temp1==temp2;
    }
};