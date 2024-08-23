class Solution{
public:
int longestCommonSubstr(string str1, string str2) {
        int max=0;
        for(int i=0;i<str1.length();i++){
            for(int j=1;j<=str1.length()-i;j++){
                if(str2.find(str1.substr(i,j))!=-1){
                    if(j>max) max=j; 
                 }
                 else break;
        }
        }
        return max;
    }
};
