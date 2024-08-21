class Solution {
public:

    string helper(int &idx, string str){
        int n=0;
        string ans="";

        while(idx<str.size()){
            char curr=str[idx];
            if(curr>='0' && curr <='9'){
                n= n*10 + curr- '0';
            }
            else if( curr=='['){
                string temp=helper(++idx, str);
                while(n>0){
                    ans+= temp;
                    n--;
                }
            }
            else if(curr==']'){
                return ans;
            }
            else{
                ans+=curr;
            }
            idx++;
        }
        return ans;
        
    }
    string decodeString(string s) {
        int i=0;
        return helper(i,s);
    }
};
