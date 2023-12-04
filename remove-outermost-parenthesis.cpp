class Solution {
public:
    string removeOuterParentheses(string s) {
        int count =0;
        string str;
        for(char c : s){
            if(c=='('){
                if(count++){
                    str+="(";
                }
            }
            else{
                if(--count){
                    str+=")";
                }
            }
        }
        return str;
    }
};